void insertion(int a[],int Number,int index,int size)
{  
    int insert_index;
    insert_index=size-1;
    while(insert_index>=index)
    {
        a[insert_index+1]=a[insert_index];
        insert_index--;
        
    }
    a[index]=Number;
     
} 
void delete(int a[],int index,int size)
{   int store_index;
    int store_element;
     
    store_element=a[index];
    store_index=index;
    while(store_index<size-1)
    {
        a[store_index]=a[store_index+1];
        store_index++;
    }
    size=size-1;   
    
    printf("Deleted Element %d from index %d ",store_element,index);
}

int main()
{   int size;
    int choice;
    int a[100];
   
    int Number;
    int index;
    printf("Enter the size of array\n");
    scanf("%d",&size);
   
    printf("Enter elements of array=\n ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("You are stored the elements=\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
    while(1)
    {    printf("\nenter 1 For insertion 2 for delete and 0 for Exit\t");
         scanf("%d",&choice);
    
        switch(choice)
        {
            case 1:
            {
                 printf("\nEnter the element You want to insert=\n ");
                 scanf("%d",&Number);
                 printf("\nEnter the Index No. at which u want to insert a Element\n");
                 scanf("%d",&index);
                 insertion(a,Number,index,size);
                 size=size+1;
                 printf("\nArray  elements are =\n");
                 for(int i=0;i< size;i++)
                {
                      printf("%d\t",a[i]);
                       }
                }
                case 2:
                {    
                    printf("\nEnter index at which U want to delete the element\n");
                    scanf("%d",&index);
                    delete(a,index,size);
                    printf("elements are=\n");
                    size=size-1;
                    for(int i=0;i< size;i++)
                {
                      printf("%d\t",a[i]);
                       }
                }
                    
                
                case 0:
                {
                    exit(0);
                }
                
            
             }
}
}
