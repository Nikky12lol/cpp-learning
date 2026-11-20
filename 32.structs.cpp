#include<iostream>
struct student{
    char name [20];
    char grade;
    int marks;
};
/*struct user{
    ...........
    ...........
}                           instead of doing this and then using struct user everywhere we want to use the block of memory
                           we can just give a nick name to the datatype struct called user 
                           then we dont need to use the struct keyword everytime we call the block
*/
typedef struct{
    char name[25];
    char password[20];
    char id[20];
} User;


//struct = collection of related members ("variables");
    //        they can be of different datatypes 
    //        listed under one block of memory 
    //        very similar to classes in other languages (but can not contain anny methods) 
int main(){
    struct student student1 = {"Nikhil krishna", 'A', 400};
    struct student student2 = {"Nihal krishna", 'B', 350};

    printf("name: %s, grade: %c, marks: %d\n", student1.name, student1.grade, student1.marks);
    printf("name: %s, grade: %c, marks: %d\n", student2.name, student2.grade, student2.marks);
    //structs are like class in java and classes in other languages;
    //just like classes in java it is used to give structure to a variable by assiging different variabels to it 

    //TYPEDEFF // just like in cpp this is just a thing used to reduce the ammount of words typed 
    //that is done by making nick names for long classes and variables names
    User user1= {"nikhil", "987654321", "12569"};
    User user2 ={"nihal", "956789456", "45678"};
    printf("%s\n",user1.name);
    printf("%s\n",user1.id);
    printf("%s\n",user1.password);
    printf("%s\n",user2.name);
    printf("%s\n",user2.id);
    printf("%s\n",user2.password);
    //if you wanted to change something in the struct
    strcat(user1.name, "14");
    printf("the changed username is : %s",user1.name);
    return 0;
}