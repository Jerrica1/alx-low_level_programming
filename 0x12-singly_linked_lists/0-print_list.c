size_t print_list(const list_t *h) {

	    size_t count = 0;

	        const list_t *current = h;

		    while (current != NULL) {

			            printf("%d ", current->value);

				            current = current->next;

					            count++;

						        }

		        printf("\n");

			    return count;

}
