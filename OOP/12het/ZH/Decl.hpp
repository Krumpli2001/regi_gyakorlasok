#include <iostream>
#include <vector>

    class Sports
    {
        private:
        double time;
        double distance;
        double average;

        protected:
        const int mins, hours, szazm, kms;

        public:
        Sports(double d, double t) : mins(60), hours(3600), szazm(100), kms(1000), average(0.0)
        {time = t; distance = d;}

        double getTime(){return time;}
        double getDistance(){return distance;}
        double getAverage(){return average;}
        void setAverage(double a){average=a;}

        virtual void computeSaveAndPrintAverage() {};
        virtual ~Sports(){};
    };

    class Swimming : public Sports
    {
        public:
        Swimming(double t, double d) : Sports(t,d) {};
        void computeSaveAndPrintAverage()
        {
            setAverage(getTime() / (getDistance()/szazm));
            std::cout << "Az uszas atlaga: "<<getAverage()<<" s / 100 m\n";
        }
        ~Swimming(){};
    };

    class Cycling : public Sports
    {
        public:
        Cycling(double t, double d) : Sports(t,d){};
        void computeSaveAndPrintAverage()
        {
            setAverage((getDistance()/kms) / (getTime()/hours));
            std::cout << "Az kerekparozas atlaga: "<<getAverage()<<" km / h\n";
        }
        ~Cycling(){};
    };

    class Running : public Sports
    {
        public:
        Running(double t, double d) : Sports(t,d){};
        void computeSaveAndPrintAverage()
        {
            setAverage((getTime()/mins) / (getDistance()/kms));
            std::cout << "A futas atlaga: "<<getAverage()<<" min / km\n";
        }
        ~Running(){};
    };

    void printAverages(std::vector<Sports*>& allSports)
    {
        int vonal = 0;
        for(auto sps : allSports)
        {
            if(vonal != 0){std::cout<<" - ";};
            std::cout<<sps->getAverage();
            vonal++;
        }
            std::cout<<std::endl;
    }

    void printNamesOfSports(std::vector<Sports*>& allSports)
    {
        for(auto sps : allSports)
        {
            if(dynamic_cast<Swimming*>(sps)) std::cout << "Uszas";
            else if(dynamic_cast<Cycling*>(sps)) std::cout << "Kerekpar";
            else if(dynamic_cast<Running*>(sps)) std::cout << "Futas";
            std::cout << std::endl;
        }
    }