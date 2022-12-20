 struct Node* prev;
    struct Node* next;
    while(a!=NULL && b!=NULL)
    {
        if(a->data < b->data)
        {
             struct Node* n=new Node(a->data);
             if(prev==NULL)
             {
                 prev=n;
                 next=prev;
             }
            else
            {
                prev->next=n;prev=n;
            }
            
            a=a->next;
        }
        else
        {
            struct Node* n=new Node(b->data);
            if(prev==NULL)
             {
                 prev=n;
                 next=prev;
             }
            else
            {
                prev->next=n;prev=n;
            }
            b=b->next;
        }
    }
    while(a!=NULL)
    {
        struct Node* n=new Node(a->data);
         if(prev==NULL)
             {
                 prev=n;
                 next=prev;
             }
            else
            {
                prev->next=n;prev=n;
            }
        a=a->next;
    }
    while(b!=NULL)
    {
        struct Node* n=new Node(b->data);
         if(prev==NULL)
             {
                 prev=n;
                 next=prev;
             }
            else
            {
                prev->next=n;prev=n;
            }
        b=b->next;
    }
    return next;
