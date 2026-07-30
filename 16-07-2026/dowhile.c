  #include<stdio.h>
void main()
{
    int n;

    do
    {
        printf("\n1.area of trianle\n2.area of square\n3.area of rectangle\n4.area of circle");
        printf("\nenter choice:");
        scanf("%d",&n);
        switch(n)
            {
            case 1:

                    int base,height;
                    printf("Enter base of a triangle ");
                    scanf("%d",&base);
                    printf("Enter height of a triangle ");
                    scanf("%d",&height);
                    printf("Area of a triangle is %.2f ",0.5*base*height);
                    break;
            case 2:
                int side;
                printf("Enter the side of the square");
                scanf("%d",&side);
                printf("the area of the square is %d",side*side);
            case 3:
                int length,breadth;
                printf("enter the length of the rectangel");
                scanf("%d",&length);
                printf("Enterh the breadth");
                scanf("%d",&breadth);
                printf("the area of rectangle is %d",length*breadth);
            case 4:
                float radius;
                printf("Enter the radius of circle");
                scanf("%f",&radius);
                printf("The area of the circle is %f",3.14*radius*radius);
            }
    }while(n<5);
}
