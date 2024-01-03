#include <stdio.h>


struct Marks
 {
    int roll_no;
    char name[30];
    float che_marks, maths_marks, phy_marks;
    int i;
};


int main() 
{
	int i;
    struct Marks marks[5];

    for(i=0;i<4;i++)
	{
		printf("Student %d\n",i+1);
        printf("Enter roll no. = \n" );
        scanf("%d", &marks[i].roll_no);
        
		printf("Enter name = \n " );
        scanf("%s",marks[i].name);
        
		printf("Enter chemistry marks = \n " );
        scanf("%f", &marks[i].che_marks);
        
		printf("Enter maths marks = \n " );
       	scanf("%f", &marks[i].maths_marks);
       
	    printf("Enter physics marks = \n " );
        scanf("%f", &marks[i].phy_marks);
    }
    

	for(i=0;i<4;i++) 
	{
	    printf("Student %d\n",i+1);
	    float percentage = (marks[i].che_marks + marks[i].maths_marks + marks[i].phy_marks)/300.0*100;
	    printf("Percentage = %f \n " ,percentage);
	}
  return 0;
}

