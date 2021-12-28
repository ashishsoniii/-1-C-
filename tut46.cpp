/* 
CONSTRUCTORS IN DERIVED CLASS

If base class constructor doesnot have any argument there is nno need of any constructor in derived class.
but if there are one or more arguments int he base class constructor, derived class need to pass argument to the base classconstructor;
If both base & derived classes have constructors, base class constructor is exuted first.

CONSTRUCTIONS IN MULTIPLE INHERITANCE
In multiple inheritance , base class are constructors in the order in which they appear in the class declaration

CONSTRUCTIONS IN MULTILEVEL INHERITANCE
In multilevel inheritance, the constructor are executed in the order of inheritance

SPECIAL SYNTAX

DERIVED_CONSTRUCTOR(arg1 , arg2 , arg3 , arg4 ,......):bas1-_constructor(arg1 , arg 2), base2_constructor(arg3, arg 4) {

}
Special case of virtual base class
the constructor for virtual base classes are invoked before an nonvirtual base class
if there are multiple virtual base classes, they are invoked in the order declared

