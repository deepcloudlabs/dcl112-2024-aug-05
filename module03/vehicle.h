#ifndef VEHICLE_H
#define VEHICLE_H
namespace siemens {
    class vehicle {
    private:
        //  members: i. attribute ii. method
        // attributes -> private -> information hiding principles
        const double capacity; // kg
        double weight; // kg
        // access modifiers: private, public, protected
    public:
        // methods
        // 1. Constructors
        vehicle(const double capacity = 5'000) ;

        // 2. Destructor
        ~vehicle();

        // 3. business methods
        bool load_box(const double box_weight);

        bool unload_box(const double box_weight) ;
        // 4. getter methods
        double get_weight() const ;
        double get_capacity() const;
    };
}

#endif //VEHICLE_H
