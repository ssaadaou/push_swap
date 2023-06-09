#include "push_swap.h"

int main(int ac, char **av)
{
    list_t *stack_a;
    char **str;
    char *join = NULL;
    list_t *head = NULL;

    is_empty(ac, av);
    join = ft_strjoin(ac,av," ");
    str = splitt(join, ' ');
    if (!valid(ac, str))
    {
        ft_putstr("no valid input\n");
        exit(1);
    }
    int i = 1;
    while(str[i] != NULL)
    {
        stack_a = new_node(ft_atoi(str[i]));
        add_node_end(&head , stack_a);
        i++;
    }
}


int valid(int ac, char **str)
{
    int i ;
    
    if(ac == 1)
        return 0;
    i = 0;
    while(str[i] != NULL)
    {
        if(ft_integer(str[i]) == 0 || ft_duplicate(str) == 0)
        {
            _free(str);
            return (0);
        }
        i++;
    }
    return (1);
}