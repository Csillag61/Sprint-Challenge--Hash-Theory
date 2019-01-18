#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hashtable.h"
#include "ex2.h"


// void hash_table_insert(HashTable *ht, char *key, char *value);
// void hash_table_remove(HashTable *ht, char *key);
// char *hash_table_retrieve(HashTable *ht, char *key);
// void destroy_hash_table(HashTable *ht);
// HashTable *hash_table_resize(HashTable *ht);

char **reconstruct_trip(Ticket **tickets, int length)
{
  HashTable *ht = create_hash_table(16);
  char **route = malloc(length * sizeof(char *));

  for (int = 0; i< length; i++){
    printf("Ticket **tickets = {\n" "Ticket { source: '%s', destination: '%s' },\n", tickets[i]->source, tickets[i]->destination);
    hash_table_insert(hash, tickets[i]->source, tickets[i]->destination);
  }
   return route;
}

void print_route(char **route, int length)
{
  for (int i = 0; i < length; i++) {
    printf("%s\n", route[i]);
  }
}



#ifndef TESTING
int main(void)
{
  // Short test
  Ticket **tickets = malloc(3 * sizeof(Ticket *));

  Ticket *ticket_1 = malloc(sizeof(Ticket));
  ticket_1->source = "NONE";
  ticket_1->destination = "PDX";
  tickets[0] = ticket_1;

  Ticket *ticket_2 = malloc(sizeof(Ticket));
  ticket_2->source = "PDX";
  ticket_2->destination = "DCA";
  tickets[1] = ticket_2;

  Ticket *ticket_3 = malloc(sizeof(Ticket));
  ticket_3->source = "DCA";
  ticket_3->destination = "NONE";
  tickets[2] = ticket_3;

  print_route(reconstruct_trip(tickets, 3), 3); // PDX, DCA, NONE

  return 0;
}
#endif
