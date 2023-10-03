#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
struct book{
    char name[30];
    char author[30];
    int id;
    struct book *prev;
    struct book *next;
};
struct student{
    char name[30];
    char email[20];
    char book[20];
    char a[30];
    int id;
    int sid;
    struct student *prev;
    struct student *next;
};

struct book *start_lib=NULL;
struct student *start=NULL;
struct book *initialize_lib(struct book *);
struct student *book_issue(struct student *);
struct student *book_return(struct student *);
void greetings();
void main_menu();
void display(struct student *);
struct book *delete_book(int);
struct book *add_book(char [],char [],int);


int main(){
    start_lib=initialize_lib(start_lib);
    greetings();
    main_menu();
    return 0;
}

void greetings(){
    printf("\n\n");
    printf("\t\t\t\t     ****************************************\n");
    printf("\t\t\t\t     *                                      *\n");
    printf("\t\t\t\t     *     ____________________________   *\n");
    printf("\t\t\t\t     *     ----------------------------     *\n");
    printf("\t\t\t\t     *      WELCOME TO STUDENT LIBRARY      *\n");
    printf("\t\t\t\t     *     ----------------------------     *\n");
    printf("\t\t\t\t     *     ____________________________   *\n");
    printf("\t\t\t\t     *                                      *\n");
    printf("\t\t\t\t     ****************************************\n");
    printf("\n\n");
    printf("\t\t\t\t     ****************************************\n");
    printf("\t\t\t\t     *                                      *\n");
    printf("\t\t\t\t     *       ------------------------       *\n");
    printf("\t\t\t\t     *       |  STUDENT LIBRARY     |       *\n");
    printf("\t\t\t\t     *       ------------------------       *\n");
    printf("\t\t\t\t     *                                      *\n");
    printf("\t\t\t\t     *                                      *\n");
    printf("\t\t\t\t     *          SAMRIDDHI COLLEGE           *\n");
    printf("\t\t\t\t     *        Lokanthali, Bhaktapur         *\n");
    printf("\t\t\t\t     *     Contact:0000000000,0000000000    *\n");
    printf("\t\t\t\t     *                                      *\n");
    printf("\t\t\t\t     ****************************************\n");
    printf("\n\n\t\t\t\t           Press any key to continue: ");
    getch();
}

void main_menu(){
    int choice;
    system("cls");
    do{
        printf("\n\n");
        printf("\n\t\t\t\t*************************************************\n");
        printf("\n\t\t\t\t\t      MAIN MENU: ");
        printf("\n\t\t\t\t\t     1.ISSUE OF BOOKS ");
        printf("\n\t\t\t\t\t     2.RETURN OF BOOKS ");
        printf("\n\t\t\t\t\t     3.DISPLAY STUDENT DETAILS ");
        printf("\n\t\t\t\t\t     4.EXIT\n ");
        printf("\n\t\t\t\t*************************************************\n");
        printf("\n\t\t\t\t\t      Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:{
                start=book_issue(start);
                break;
        	}
             case 2:{
                start=book_return(start);
                break;
            }
            case 3:{
                display(start);
                break;
            }
            case 4:{
                exit(1);
            }
            default:{
                printf("\n\t\t\t\t\t      ...Invalid Option!...\n");
                printf("\n\t\t\t\t\t    Press any key to try again: ");
                getch();
            }
        }
    }while(choice!=4);
}

struct book *initialize_lib(struct book *start){
    struct book *ptr,*new_book1,*new_book2,*new_book3,*new_book4,*new_book5,*new_book6,*new_book7,*new_book8,*new_book9,
    *new_book10;
    new_book1=(struct book *)malloc(sizeof(struct book));
    new_book1->prev=NULL;
    new_book1->next=NULL;
    start_lib=new_book1;
    strcpy(new_book1->name,"The Lord Of The Rings");
    strcpy(new_book1->author,"John Tolkien");
    new_book1->id=101;
    ptr=new_book1;

    new_book2=(struct book*)malloc(sizeof(struct book));
    new_book2->prev=NULL;
    new_book2->next=NULL;
    strcpy(new_book2->name,"The Little Prince");
    strcpy(new_book2->author,"Antoine de Saint-Exupery");
    new_book2->id=102;
    ptr->next=new_book2;
    ptr=new_book2;
    ptr->prev=new_book1;

    new_book3=(struct book*)malloc(sizeof(struct book));
    new_book3->prev=NULL;
    new_book3->next=NULL;
    strcpy(new_book3->name,"Harry Potter and the Philosopher's Stone");
    strcpy(new_book3->author,"J.K. Rowling");
    new_book3->id=103;
    ptr->next=new_book3;
    ptr=new_book3;
    ptr->prev=new_book2;

    new_book4=(struct book*)malloc(sizeof(struct book));
    new_book4->prev=NULL;
    new_book4->next=NULL;
    strcpy(new_book4->name,"Scouting for Boys");
    strcpy(new_book4->author,"Robert Baden-Powell");
    new_book4->id=104;
    ptr->next=new_book4;
    ptr=new_book4;
    ptr->prev=new_book3;

    new_book5=(struct book*)malloc(sizeof(struct book));
    new_book5->prev=NULL;
    new_book5->next=NULL;
    strcpy(new_book5->name,"And Then There Were None");
    strcpy(new_book5->author,"Agatha Christie");
    new_book5->id=105;
    ptr->next=new_book5;
    ptr=new_book5;
    ptr->prev=new_book4;
    
    new_book6=(struct book*)malloc(sizeof(struct book));
    new_book6->prev=NULL;
    new_book6->next=NULL;
    strcpy(new_book6->name,"The Hobbit");
    strcpy(new_book6->author,"John Tolkien");
    new_book6->id=106;
    ptr->next=new_book6;
    ptr=new_book6;
    ptr->prev=new_book5;
    
    new_book7=(struct book*)malloc(sizeof(struct book));
    new_book7->prev=NULL;
    new_book7->next=NULL;
    strcpy(new_book7->name,"The Dream of The Red Chamber");
    strcpy(new_book7->author,"Cao Xueqin");
    new_book7->id=107;
    ptr->next=new_book7;
    ptr=new_book7;
    ptr->prev=new_book6;

    new_book8=(struct book*)malloc(sizeof(struct book));
    new_book8->prev=NULL;
    new_book8->next=NULL;
    strcpy(new_book8->name,"Fifty Shades of Grey");
    strcpy(new_book8->author,"E.L. James");
    new_book8->id=108;
    ptr->next=new_book8;
    ptr=new_book8;
    ptr->prev=new_book7;
    
    new_book9=(struct book*)malloc(sizeof(struct book));
    new_book9->prev=NULL;
    new_book9->next=NULL;
    strcpy(new_book9->name,"Angel and Demons");
    strcpy(new_book9->author,"Dan Brown");
    new_book9->id=109;
    ptr->next=new_book9;
    ptr=new_book9;
    ptr->prev=new_book8;
    
    new_book10=(struct book*)malloc(sizeof(struct book));
    new_book10->prev=NULL;
    new_book10->next=NULL;
    strcpy(new_book10->name,"Twilight");
    strcpy(new_book10->author,"Stephenie Meyer");
    new_book10->id=110;
    ptr->next=new_book10;
    ptr=new_book10;
    ptr->prev=new_book9;
    
    return start_lib;
}

struct student *book_issue(struct student *start){
    struct book *bptr;
    struct student *ptr2,*new_student;
    struct record *studentrec, *rptr;
    int i=1,id,sid,flag=0;
    if(start_lib==NULL){
        printf("\n\t\t\t\t\t No books left in the library to issue!\n\t\t\t\t Sorry for the inconvenience!\n");
    }else{
        system("cls");
        bptr=start_lib;
        printf("\n\t\t*************** Books Available: ****************\n");
        while(bptr!=NULL){
            printf("\n\t\t_________________________________________________\n");
            printf("\n\t\t Book %d",i);
            printf("\n\t\t Book Title: %s",bptr->name);
            printf("\n\t\t Name of Author: %s",bptr->author);
            printf("\n\t\t Book ID: %d",bptr->id);
            printf("\n\t\t_________________________________________________\n");
            bptr=bptr->next;
            i++;
        }
        printf("\n\n\t Enter the Book ID: ");
        scanf("%d",&id);
        bptr=start_lib;
        while(bptr!=NULL){
            if(bptr->id==id){
                flag=1;
                break;
            }
            bptr=bptr->next;
        }
        if(flag==1){
            bptr=start_lib;
            while(bptr->id!=id){
                bptr=bptr->next;
            }
            new_student=(struct student *)malloc(sizeof(struct student));
            printf("\n\t Enter Student Details:\n ");
            printf("\n\t Enter your Name: ");
            scanf("%s",new_student->name);
            printf("\n\t Enter your student id: ");
            scanf("%d",&new_student->sid);
            printf("\n\t Enter your Email: ");
            scanf("%s",new_student->email);
            strcpy(new_student->book,bptr->name);
            strcpy(new_student->a,bptr->author);
            new_student->id=bptr->id;
            new_student->prev=NULL;
            new_student->next=NULL;
            printf("\n\t*************************************************\n");
            printf("\n\tIssue of Book ID %d done successfully!\n",new_student->id);
            printf("\n\t*************************************************\n");
            if(start==NULL){
                start=new_student;
            }else{
                ptr2=start;
                while(ptr2->next!=NULL){
                    ptr2=ptr2->next;
                }
                ptr2->next=new_student;
                new_student->prev=ptr2;
                new_student->next=NULL;
            }
            start_lib=delete_book(new_student->id);
            printf("\n\n\t\t Press any key to go to the main menu: ");
            getch();
            system("cls");
        }else{
            printf("\n\t\t      ...Invalid Option!...\n");
            printf("\n\t\t    Press any key to try again: ");
            getch();
            system("cls");
        }
    }
    return start;
}

void display(struct student *start){
    struct student *ptr;
    ptr=start;
    while(ptr!=NULL){
        printf("\n\t\t************* Details of Students: **************\n");
        printf("\n\t\t_________________________________________________\n");
        printf("\n\t\t\t Student Name: %s",ptr->name);
        printf("\n\t\t\t Student Email: %s",ptr->email);
        printf("\n\t\t\t Name of Book Issued: %s",ptr->book);
        printf("\n\t\t\t Book ID: %d",ptr->id);
        printf("\n\t\t_________________________________________________\n");
        printf("\n\n\t\t*************************************************\n");
        ptr=ptr->next;
    }
    printf("\n\n\t\t Press any key to go to the main menu: ");
    getch();
    system("cls");
}

struct book *delete_book(int id){
    struct book *ptr,*preptr,*postptr;
    int c=0;
    ptr=start_lib;
    while(ptr!=NULL){
        c++;
        ptr=ptr->next;
    }
    if(c==1){
        ptr=start_lib;
        start_lib=NULL;
        free(ptr);
    }else if(start_lib->id==id){
        ptr=start_lib;
        start_lib=start_lib->next;
        free(ptr);
    }else{
        ptr=start_lib;
        while(ptr->id!=id){
            preptr=ptr;
            ptr=ptr->next;
        }
        postptr=ptr->next;
        postptr->prev=preptr;
        preptr->next=postptr;
        free(ptr);
    }
    return start_lib;
}

struct student *book_return(struct student *start){
    struct student *ptr,*preptr,*postptr;
    char bookname[30],authorname[30];
    int flag=0,id,identity,c=0,d=1;
    printf("\n\n\t*************** Books Submission: ****************\n");
    printf("\n\n\t Enter your Book ID: ");
    scanf("%d",&identity);
    ptr=start;
    while(ptr!=NULL){
        if(ptr->id==identity){
            flag=1;
            break;
        }
        ptr=ptr->next;
    }
    if(flag==1){
        ptr=start;
       /* while(ptr!=NULL){
            c++;
            ptr=ptr->next;
        }*/
        ptr=start;
        while(ptr->id!=identity){
                d++;
            ptr=ptr->next;
        }
        ptr=start;
        if( d==1 ){
            printf("\n\t\t_________________________________________________\n");
            printf("\n\t\t Student Name: %s",start->name);
            printf("\n\t\t Student Email: %s",start->email);
            printf("\n\t\t Name of Book Issued: %s",start->book);
            printf("\n\t\t_________________________________________________\n");
            printf("\n\n\t\t Return of Book ID %d done successfully!\n",identity);
            printf("\n\n\t\t*************************************************\n");
            strcpy(bookname,start->book);
            strcpy(authorname,start->a);
            id=start->id;
            start=start->next;
            start->prev=NULL;
            free(ptr);
            add_book(bookname,authorname,id);
        }else{
            ptr=start;
            while(ptr->id!=identity){
                preptr=ptr;
                ptr=ptr->next;
            }
            postptr=ptr->next;
            printf("\n\t\t_________________________________________________\n");
            printf("\n\t\t Student Name: %s",ptr->name);
            printf("\n\t\t Student Email: %s",ptr->email);
            printf("\n\t\t Name of Book Issued: %s",ptr->book);
            printf("\n\t\t Book ID: %d",ptr->id);
            printf("\n\t\t_________________________________________________\n");
            strcpy(bookname,ptr->book);
            strcpy(authorname,ptr->a);
            id=ptr->id;
            preptr->next=ptr->next;
            postptr->prev=preptr;
            free(ptr);
            add_book(bookname,authorname,id);
        }
        printf("\n\t\t Thank you!\t Do visit again! ??");
        printf("\n\n\t Press any key to go to the main menu: ");
        getch();
        system("cls");
    }else{
        printf("\n\t\tSorry the book doesn't exist! Please recheck the entered ID");
        printf("\n\t\t\t\t      Press any key to try again: ");
        getch();
        system("cls");
    }
    return start;
}


struct book *add_book(char bookname[30],char authorname[30],int id){
    struct book *ptr,*new_book;
    new_book=(struct book *)malloc(sizeof(struct book));
    strcpy(new_book->name,bookname);
    strcpy(new_book->author,authorname);
    new_book->id=id;
    new_book->prev=NULL;
    new_book->next=NULL;
    if(start_lib==NULL){
        start_lib=new_book;
    }else{
        ptr=start_lib;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=new_book;
        new_book->prev=ptr;
        new_book->next=NULL;
    }
    return start_lib;
}
