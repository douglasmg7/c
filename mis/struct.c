
struct Person
{
    char name[50];
    int citNo;
    float salary;
};

// Or.
struct Person2
{
    char name[50];
    int citNo;
    float salary;
} person1, person2, p[20];

int main()
{
    struct Person person1, person2, p[20];
    return 0;
}
