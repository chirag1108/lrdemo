# 1 "c:\\users\\chirag.mathur\\documents\\scripts\\gitdemo\\\\combined_GitDemo.c"
# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


# 1075 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_search_row(PVCI pvci, char * columnNames, char * messages, char * delimiter, char * **outcolumns, char * **outvalues);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);
VTCERR   vtc_update_all_message_ifequals(PVCI pvci, char * columnNames, char * message, char * ifmessage, char * delimiter, unsigned short *outRc);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_search_row(char * columnNames, char * messages, char * delimiter);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);
VTCERR   lrvtc_update_all_message_ifequals(char * columnNames, char * message, char * ifmessage, char * delimiter);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "c:\\users\\chirag.mathur\\documents\\scripts\\gitdemo\\\\combined_GitDemo.c" 2

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_search_row(PVCI2 pvci, char *columnNames, char *messages, char *delimiter, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_search_row(char *columnNames, char *messages, char *delimiter);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "c:\\users\\chirag.mathur\\documents\\scripts\\gitdemo\\\\combined_GitDemo.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


# 802 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"



























# 840 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);


 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2


 
 


# 3 "c:\\users\\chirag.mathur\\documents\\scripts\\gitdemo\\\\combined_GitDemo.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "c:\\users\\chirag.mathur\\documents\\scripts\\gitdemo\\\\combined_GitDemo.c" 2

# 1 "Action.c" 1
Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=90", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"LAST");

	(web_remove_auto_header("Sec-Fetch-Site", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_url("blazedemo.com", 
		"URL=https://blazedemo.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_8.pb", "Referer=", "ENDITEM", 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABA3d3dwdnc3RhdGljA2NvbQAAAQABAAApEAAAAAAAAFQADABQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", "ENDITEM", 
		"Url=https://cdn.mxpnl.com/libs/mixpanel-2.2.min.js", "Referer=", "ENDITEM", 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABCWJsYXplZGVtbwNjb20AAAEAAQAAKRAAAAAAAABWAAwAUgAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", "ENDITEM", 
		"Url=/favicon.ico", "ENDITEM", 
		"LAST");

	web_add_cookie("gnar_containerId=qxnPSxWqSwxE; DOMAIN=auth.grammarly.com");

	web_add_cookie("_gcl_au=1.1.158826989.1619417052; DOMAIN=auth.grammarly.com");

	web_add_cookie("ga_clientId=2019783442.1619417053; DOMAIN=auth.grammarly.com");

	web_add_cookie("_hjid=ab5478c6-b271-487f-aad0-e8df8f0ddc68; DOMAIN=auth.grammarly.com");

	web_add_cookie("_ga=GA1.1.2019783442.1619417053; DOMAIN=auth.grammarly.com");

	web_add_cookie("grauth=AABJN2_mmkgR9ion437rvRGdNlmEaeJRxuKndtCJQ896igjdtuttr82fqpJXuYLqT7yfWyeEza_CbR_0; DOMAIN=auth.grammarly.com");

	web_add_cookie("csrf-token=AABJN1mBPqjAuMV12hX1MN+rGZaL+EABQeSiqg; DOMAIN=auth.grammarly.com");

	web_add_cookie("tdi=asems1ohualrti4u8; DOMAIN=auth.grammarly.com");

	web_add_cookie("_ga_CBK9K2ZWWE=GS1.1.1619417052.1.1.1619417213.0; DOMAIN=auth.grammarly.com");

	web_add_cookie("experiment_groups=fsrw_in_sidebar_allusers_enabled|extension_assistant_bundles_all_consumers_enabled|denali_capi_all_enabled|fsrw_in_assistant_all_consumers_enabled|truecaser_enabled|extension_new_rich_text_fields_enabled|gdocs_for_chrome_enabled|officeaddin_outcomes_ui_exp5_enabled1|premium_ungating_renewal_notification_enabled|quarantine_messages_enabled|small_hover_menus_existing_enabled|emogenie_filter_no_tone_sentences_enabled|officeaddin_upgrade_state_exp2_enabled1|"
		"gb_analytics_mvp_phase_one_enabled|apply_formatting_all_consumers_enabled|ipm_extension_release_test_1|extension_assistant_experiment_all_consumers_enabled|extension_assistant_bundles_all_enabled|officeaddin_proofit_exp3_enabled|gdocs_sidebar_allusers_enabled|gb_in_editor_free_Test1|gdocs_for_all_firefox_enabled|gb_analytics_mvp_phase_one_30_day_enabled|auto_complete_correct_safari_enabled|fluid_gdocs_rollout_enabled|officeaddin_ue_exp3_enabled|officeaddin_upgrade_state_exp1_enabled1|"
		"safari_migration_inline_disabled_enabled|refresh_experiments_test_enabled|completions_release_enabled1|ipm_gb_member_activation_v2_test_2|optimized_gdocs_gate_2_enabled|extension_assistant_all_consumers_enabled|fsrw_in_assistant_all_enabled|apollo_rollout_gate_enabled_1|autocorrect_new_ui_v3|emogenie_token_length_filter_enabled|emogenie_beta_enabled|apply_formatting_all_enabled|shadow_dom_chrome_enabled|denali_link_to_kaza_enabled|extension_assistant_experiment_all_enabled|"
		"gdocs_for_all_safari_enabled|extension_assistant_all_enabled|safari_migration_backup_notif1_enabled|auto_complete_correct_edge_enabled|safari_migration_popup_editor_disabled_enabled|extension_check_manakin_v2_experiment_enabled|safari_migration_inline_warning_enabled|denali_capi_all_consumers_enabled|clarity_ai_free_v03_alert_email_1|gdocs_new_mapping_enabled|ipm_mass_promotions_test_2|officeaddin_muted_alerts_exp2_enabled1|officeaddin_perf_exp3_enabled; DOMAIN=auth.grammarly.com");

	web_add_cookie("S46qsbjl6B=S46qsbjl6B; DOMAIN=auth.grammarly.com");

	web_add_cookie("32fdlJnHZg=32fdlJnHZg; DOMAIN=auth.grammarly.com");

	web_add_cookie("tK2CY5ywed=tK2CY5ywed; DOMAIN=auth.grammarly.com");

	web_add_auto_header("Origin", 
		"chrome-extension://kbfnbcaeplbcioakkpcpgfkobkghlhen");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_header("X-CSRF-Token", 
		"AABJN1mBPqjAuMV12hX1MN+rGZaL+EABQeSiqg");

	web_add_header("X-Client-Type", 
		"extension-chrome");

	web_add_header("X-Client-Version", 
		"14.1012.0");

	web_add_header("X-Container-Id", 
		"qxnPSxWqSwxE");

	lr_think_time(4);

	web_custom_request("oranonymous", 
		"URL=https://auth.grammarly.com/v3/user/oranonymous?app=chromeExt&field=frontend_primaryLanguage&field=frontend_soundFluent&field=frontend_role&containerId=qxnPSxWqSwxE", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	lr_think_time(4);

	web_custom_request("logv2", 
		"URL=https://f-log-extension.grammarly.io/logv2", 
		"Method=POST", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"logger\":\"bg.user.fetch.fail\",\"level\":\"WARN\",\"extra\":{\"json\":\"{}\"},\"application\":\"extensionChrome\",\"version\":\"14.1012.0\",\"env\":\"prod\",\"containerId\":\"qxnPSxWqSwxE\"}", 
		"LAST");

	web_add_cookie("gnar_containerId=qxnPSxWqSwxE; DOMAIN=gnar.grammarly.com");

	web_add_cookie("_gcl_au=1.1.158826989.1619417052; DOMAIN=gnar.grammarly.com");

	web_add_cookie("ga_clientId=2019783442.1619417053; DOMAIN=gnar.grammarly.com");

	web_add_cookie("_hjid=ab5478c6-b271-487f-aad0-e8df8f0ddc68; DOMAIN=gnar.grammarly.com");

	web_add_cookie("_ga=GA1.1.2019783442.1619417053; DOMAIN=gnar.grammarly.com");

	web_add_cookie("grauth=AABJN2_mmkgR9ion437rvRGdNlmEaeJRxuKndtCJQ896igjdtuttr82fqpJXuYLqT7yfWyeEza_CbR_0; DOMAIN=gnar.grammarly.com");

	web_add_cookie("csrf-token=AABJN1mBPqjAuMV12hX1MN+rGZaL+EABQeSiqg; DOMAIN=gnar.grammarly.com");

	web_add_cookie("tdi=asems1ohualrti4u8; DOMAIN=gnar.grammarly.com");

	web_add_cookie("_ga_CBK9K2ZWWE=GS1.1.1619417052.1.1.1619417213.0; DOMAIN=gnar.grammarly.com");

	web_add_cookie("experiment_groups=fsrw_in_sidebar_allusers_enabled|extension_assistant_bundles_all_consumers_enabled|denali_capi_all_enabled|fsrw_in_assistant_all_consumers_enabled|truecaser_enabled|extension_new_rich_text_fields_enabled|gdocs_for_chrome_enabled|officeaddin_outcomes_ui_exp5_enabled1|premium_ungating_renewal_notification_enabled|quarantine_messages_enabled|small_hover_menus_existing_enabled|emogenie_filter_no_tone_sentences_enabled|officeaddin_upgrade_state_exp2_enabled1|"
		"gb_analytics_mvp_phase_one_enabled|apply_formatting_all_consumers_enabled|ipm_extension_release_test_1|extension_assistant_experiment_all_consumers_enabled|extension_assistant_bundles_all_enabled|officeaddin_proofit_exp3_enabled|gdocs_sidebar_allusers_enabled|gb_in_editor_free_Test1|gdocs_for_all_firefox_enabled|gb_analytics_mvp_phase_one_30_day_enabled|auto_complete_correct_safari_enabled|fluid_gdocs_rollout_enabled|officeaddin_ue_exp3_enabled|officeaddin_upgrade_state_exp1_enabled1|"
		"safari_migration_inline_disabled_enabled|refresh_experiments_test_enabled|completions_release_enabled1|ipm_gb_member_activation_v2_test_2|optimized_gdocs_gate_2_enabled|extension_assistant_all_consumers_enabled|fsrw_in_assistant_all_enabled|apollo_rollout_gate_enabled_1|autocorrect_new_ui_v3|emogenie_token_length_filter_enabled|emogenie_beta_enabled|apply_formatting_all_enabled|shadow_dom_chrome_enabled|denali_link_to_kaza_enabled|extension_assistant_experiment_all_enabled|"
		"gdocs_for_all_safari_enabled|extension_assistant_all_enabled|safari_migration_backup_notif1_enabled|auto_complete_correct_edge_enabled|safari_migration_popup_editor_disabled_enabled|extension_check_manakin_v2_experiment_enabled|safari_migration_inline_warning_enabled|denali_capi_all_consumers_enabled|clarity_ai_free_v03_alert_email_1|gdocs_new_mapping_enabled|ipm_mass_promotions_test_2|officeaddin_muted_alerts_exp2_enabled1|officeaddin_perf_exp3_enabled; DOMAIN=gnar.grammarly.com");

	web_add_cookie("S46qsbjl6B=S46qsbjl6B; DOMAIN=gnar.grammarly.com");

	web_add_cookie("32fdlJnHZg=32fdlJnHZg; DOMAIN=gnar.grammarly.com");

	web_add_cookie("tK2CY5ywed=tK2CY5ywed; DOMAIN=gnar.grammarly.com");

	web_add_cookie("qDWQWSRV6C=qDWQWSRV6C; DOMAIN=gnar.grammarly.com");

	web_add_header("Origin", 
		"chrome-extension://kbfnbcaeplbcioakkpcpgfkobkghlhen");

	web_custom_request("events", 
		"URL=https://gnar.grammarly.com/events", 
		"Method=POST", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"events\":[{\"action\":\"loaded\",\"eventName\":\"chromeExt/extension-loaded\",\"objectId\":\"extension\",\"oldVersion\":\"14.1012.0\",\"client\":\"chromeExt\",\"clientVersion\":\"14.1012.0\",\"instanceId\":\"RN78PdwY\",\"batchId\":0,\"containerId\":\"qxnPSxWqSwxE\",\"userId\":\"1035883401\",\"isTest\":false,\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.212 Safari/537.36\",\"screenWidth\":1366,\"screenHeight\":768,\""
		"containerWidth\":0,\"containerHeight\":0,\"devicePixelRatio\":1}]}", 
		"EXTRARES", 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABDmNsaWVudHNlcnZpY2VzCmdvb2dsZWFwaXMDY29tAAABAAEAACkQAAAAAAAARgAMAEIAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", "ENDITEM", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Origin", 
		"https://blazedemo.com");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("reserve.php", 
		"Action=https://blazedemo.com/reserve.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=fromPort", "Value=Paris", "ENDITEM", 
		"Name=toPort", "Value=London", "ENDITEM", 
		"EXTRARES", 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABBnVwZGF0ZQpnb29nbGVhcGlzA2NvbQAAAQABAAApEAAAAAAAAE4ADABKAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", "ENDITEM", 
		"LAST");

	(web_remove_auto_header("sec-ch-ua", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("sec-ch-ua-mobile", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_header("X-Chrome-UMA-Log-HMAC-SHA256", 
		"Zvul9UD+f1C7NC0zrWCzKnLUlDTy1eL+j/l+OfFTlUI=");

	web_add_header("X-Chrome-UMA-Log-SHA1", 
		"6B2B014CED9724F7012424EA88AC7EC80181127F");

	web_add_header("X-Chrome-UMA-ReportingInfo", 
		"CAE=");

	web_custom_request("v2", 
		"URL=https://clientservices.googleapis.com/uma/v2", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/vnd.chrome.uma", 
		"BodyBinary=\t\\xD9\\xD5yx\\\\~i~\\x10\\xFA\\x05\\x1A\\x94\\x18\\x08\\xAE\\xAC\\xD7\\x84\\x06\\x12\\x1090.0.4430.212-64\\x18\\x80\\xCE\\x9D\\xE4\\x05\"\\x05en-US*\\x18\n\nWindows NT\\x12\n10.0.190422\\xDE\\x01\n\\x06x86_64\\x10\\xDA}\\x18\\x80\\x80\\xA8\\xF7\\xCB\\xFF\\x1F\"\\x00(\\x010\\xD6\n8\\x80\\x06B\\x84\\x01\\x08\\x86\\x81\\x02\\x10\\x962\\x1A\\x0E26.20.100.81422\\x13Google Inc. (Intel):VANGLE (Intel, Intel(R) HD Graphics 520 Direct3D11 vs_5_0 ps_5_0, D3D11-26.20.100.8142)"
		"M'\\xB9\\xC9BU\\xAC%\\xCABe\\x00\\x00\\x80?j\\x16\n\\x0CGenuineIntel\\x10\\xE3\\x8D\\x10\\x18\\x04 \\x00\\x82\\x01\\x02\\x08\\x01\\x8A\\x01\\x02\\x08\\x01\\xAA\\x01\\x06x86_64:;\n\\x11Chrome PDF Viewer\\x12 mhjfbmdgcfjbbpaeojofohoefgiehjai\\x1A\\x00 \\x00(\\x00:+\n\rNative Client\\x12\\x14internal-nacl-plugin\\x1A\\x00 \\x00(\\x01:.\n\\x11Chrome PDF Plugin\\x12\\x13internal-pdf-viewer\\x1A\\x00 \\x00(\\x01B\\x00J\n\r]s\\x81\\xAF\\x15\\xBD\\xE7\\x19TJ\n\r1V\\x08\\x84\\x15\\xCF\\xA1\\x02\\xABJ\n\r"
		"[\\x07\\xA7\\x90\\x15\\x80\\x8D}\\xCAJ\n\rT`\\xB1\\x16\\x15\\x80\\x8D}\\xCAJ\n\r\\x87Q\\xF7\\xB0\\x15Z\\xE5{7J\n\r\\x12\\xF4\\xB6Y\\x15\\x80\\x8D}\\xCAJ\n\rR\\xB3\\xD4`\\x15\\x01\\xB7\\xFC\\x00J\n\r\\xFE\\x82\\xA6L\\x15Z\\xE5{7J\n\r\\x8C\\x1EV\\xD7\\x15\\x80\\x8D}\\xCAJ\n\r\\xC4\\x9E$\\xB3\\x15\\xDF\\x17J?J\n\r<Q\\xEF\\xA9\\x15\\x80\\x8D}\\xCAJ\n\rY\\xD0\\xA8?\\x15Z\\xE5{7J\n\r\\xBF$\\xE4\\x8A\\x15\\xC1\\x9E\\x7F\\x1AJ\n\r{\\x85j\\x9D\\x15\\xE4\\xDA\\x04HJ\n\rR\\xD9\\x16\\x88\\x15Z\\xE5{7J\n\r"
		"\\x95\\xAA\\x950\\x15\\xDF\\x17J?J\n\r1\\xEC\\x7F\\xC2\\x15/QtjJ\n\r\\xAD\\xDC\\x99\\xE7\\x15\\xA2\\xE6\\xED\\x12J\n\r]\\x88\\xB98\\x15|Y\\x00JJ\n\r\\xA9\\x8E\\xB5\\xED\\x15\\x80\\x8D}\\xCAJ\n\r\\x08J`\\x9E\\x15Z\\xE5{7J\n\r\\x12\\xCB\\xB1\\xDE\\x15\\x01v\\x88zJ\n\rR\\xB0Az\\x15t\\xE7\\x0F\\xC4J\n\r1\\x9A\\x1Fo\\x15Z\\xE5{7J\n\r\\xDE\\xABD\\x8E\\x15Z\\xE5{7J\n\rP\\xF3\\xB5G\\x15Z\\xE5{7J\n\rzi\\x83\\x8F\\x15\\x85\\x0E\\xE7\\x00J\n\r\\x1F\\xB6,\\x0F\\x15\\xC7\\x92\\xDCnJ\n\r\\xAE\\xB3+"
		"\\xDC\\x15sY\\x8C\\x1FJ\n\r\\xFB\\xBF\\xAE\\xC3\\x15\\x80\\x8D}\\xCAJ\n\rL8\\xFD\\xA2\\x15\\xAA\\x03\\x0C\\\\J\n\r\\xCD\\xA7\n\\xF9\\x15\\x80\\x8D}\\xCAJ\n\r\\xDA\\xF2\\xBA\\xA6\\x154r\\xE5\\xCEJ\n\r\\x1A\\x14r\\xC5\\x15\\x80\\x8D}\\xCAJ\n\r\\x06\\x08We\\x15\\xD1\\x10#\\xDEJ\n\r\\x8Ai\\xFF,\\x15e\\xB9\\xD8bJ\n\r\\x97\\x82\\x9C\\x9F\\x15Z\\xE5{7J\n\r\\xB8\\xA1\\x82\\xA5\\x15\\x17\\xCEu\\xADJ\n\r-h;\\x8E\\x15\\x80\\x8D}\\xCAJ\n\r\\x8Cb\\xB6\\xB9\\x15\\x80\\x8D}\\xCAJ\n\r\\xB5k`\\x1D\\x15\\x80\\x8D}"
		"\\xCAJ\n\rK\\xADB0\\x15\\x80\\x8D}\\xCAJ\n\r\\xE9W\\xA3\\xE4\\x15\\x80\\x8D}\\xCAJ\n\rM\\xDF\\xDAS\\x15\\x80\\x8D}\\xCAJ\n\r\\xCA\\x84gg\\x15\\xDF\\x17J?J\n\rjvN\\xE1\\x15\\x037\\xA4\\xF9J\n\rv\\xB3\\xBF\\xBE\\x15\\xB7~\\xF5\\x92J\n\r4\\xD3\\xB42\\x15Z\\xE5{7J\n\r\\xCFa<\\xEB\\x15Z\\xE5{7J\n\r8>\\xA5\\x05\\x15\\x80\\x8D}\\xCAJ\n\ro\\x1B\\xA8.\\x15\\x80\\x8D}\\xCAJ\n\rm#:^\\x15\\xD0\\x86\\xE2YJ\n\rl\\xE5\\x9D\\xE7\\x15\\x80\\x8D}\\xCAJ\n\r\\xDEdz5\\x15\\x80\\x8D}\\xCAJ\n\r"
		"\\xD7X.\\x14\\x15\\x80\\x8D}\\xCAJ\n\r\\x87GT3\\x15\\xCAT\\x94JJ\n\r\\xF1u\\\\\\x9E\\x15\\x80\\x8D}\\xCAJ\n\r\\xD7>\\xFE\\x9B\\x15\\x80\\x8D}\\xCAJ\n\r\\x82$i\\xD8\\x15\\xFFj\\xC4\\x82J\n\r\\xF0\\x86s\\x01\\x15\\x8Dxy\\x97J\n\r,;d\\xC6\\x15\\xEF\\x10\\xC8\\x91J\n\rq\\xB5 \\xA1\\x15\\x9F\\x8Dq\\xF2J\n\r\\x9F\\x1E\\x91z\\x15\\xB9\\xFF!mJ\n\r\\x86&\\xFB8\\x15J\\xD4\\x8A\\x02J\n\r\\xA8\\xFE]%\\x15\\xA2\\xE6\\xED\\x12J\n\r\\xA7f\\xAC>\\x15Z\\xE5{7J\n\r\\xA1\\xC4\\xBC\\xBD\\x15\\x8E\\xC0\\xBC\\x99J\n\r"
		"\\xCB\\xF4S\\xE1\\x15\\x80\\x8D}\\xCAJ\n\r\\x87p\\x03j\\x15\\x80\\x8D}\\xCAJ\n\r\\x8Ed@\\xAB\\x15\\x80\\x8D}\\xCAJ\n\r`g6\\x12\\x15\\x80\\x8D}\\xCAJ\n\r+\\x7F\\x94\\xF8\\x15Z\\xE5{7J\n\r\\xDFG\\xE2_\\x15\\x80\\x8D}\\xCAJ\n\r\\xBDoV\\xD3\\x15\\xB4}d?J\n\r\\xF41\\x98\\xCB\\x15Z\\xE5{7J\n\rjX\\x85\\xAE\\x15Z\\xE5{7J\n\r\\xA6\\x03\\xA3N\\x15\\x0E%\\xBB\\xECJ\n\r\\x1F\\x82Hp\\x15\\x19p\\xF8eJ\n\r6\\xEE\\x8A\\xF4\\x15Z\\xE5{7J\n\r\\xA5m\\xA4z\\x15P\\xB1F\\xC9J\n\rl\\x07\\xF4\\xD6\\x15\\x80\\x8D}\\xCAJ\n"
		"\rl\\x9D\\x8F\\x8C\\x15Z\\xE5{7J\n\r\\xC0\\x8E\\xFFO\\x15Z\\xE5{7J\n\r\\xF0\\xA9 \\xD5\\x15Z\\xE5{7J\n\rt8\\x06x\\x15dy\\x7F\\xA6J\n\r\\xD7dG\\xEF\\x15B\\xCC\\xB6/J\n\r\\xC8\\xB7mO\\x15\\x80\\x8D}\\xCAJ\n\r{\\xA8u\\xA3\\x15Z\\xE5{7J\n\r\rH\\x1B\\xF3\\x15\\x80\\x8D}\\xCAJ\n\rWU\\x9Dj\\x15\\x80\\x8D}\\xCAJ\n\r\\xB2\\xB5`w\\x15\\xA2\\xE6\\xED\\x12J\n\r\\x1AR\\xA8\\x9C\\x15Z\\xE5{7J\n\rG\\xAE\\xBA9\\x15\\x10\\xA1~|J\n\r\\x85\\xDAT\\x13\\x15\\xA7\\x94\\x12xJ\n\rr_\\x1C\\x93\\x15\\xB0X\\x92\\xC3J\n\r"
		"`\\x87MI\\x15C]2RJ\n\r*\\xE8z\\xF4\\x15\\xE5.\\xF2\\x86J\n\rU\\x08\\xC6:\\x15\\x9C*nHJ\n\r\\xA3\\xB6\\xDCc\\x15\\xA74\\x89\\xF0J\n\rF\\xE7\\x06\\xE7\\x155\\xD5\\xE5\\xFAJ\n\r\\x0C\\x19\\x96\\xF2\\x15\\x923.\\xB5J\n\r\\xE2\\xAABD\\x15\\x14\\x0F\\xCC\\xE1J\n\rd\\xCF\\x90\\xF6\\x15c(\\x82\\xA5J\n\rw\\xD3\\xD1\\x0E\\x15\\x14\\x0F\\xCC\\xE1J\n\r\\xA0\\xF0\\xF0u\\x15\\x14\\x0F\\xCC\\xE1J\n\r\\x81\\x84\\xB1\\xE2\\x15\\x06\\xFBduJ\n\r\\x89\\x18\\xE7\\xE7\\x15\\x14\\x0F\\xCC\\xE1J\n\r"
		"\\x96\\x846\\xE1\\x15\\x80\\x8D}\\xCAJ\n\r\\x03_C'\\x15\\xD8Z\t\\xD1J\n\r#_\\x9D\\xD3\\x15\\x80\\x8D}\\xCAJ\n\r\\xFB\\x0F}\\xD6\\x15\\x80\\x8D}\\xCAJ\n\r\\xE0\\xC3\\x075\\x15\\xC7\\x92\\xDCnJ\n\rOIP\\xFB\\x15b\\xC0\\xCArJ\n\r\\x1Av~T\\x15\\x11\\xE6\tGJ\n\r/\\xE4\\xB2\\x8D\\x159\\xCC\\xD3\\xAEJ\n\rH\\xBB1^\\x15f<QuJ\n\r$\\x12\\xB5u\\x15\\xFC)\\x9B\\xFDJ\n\rW\\x94\\xB3\\xAB\\x15\\xFD\\x04\\x98\\x13J\n\rp\\xB1a\\xA4\\x15\\x80\\x8D}\\xCAJ\n\rvw\\xF2\\xDE\\x15\\x80\\x8D}\\xCAJ\n\r\\xF9>?"
		"\\xB5\\x15\\x80\\x8D}\\xCAJ\n\r\\xDC\\xAB\\xAD\\x1F\\x15Z\\xE5{7J\n\r1\\x90U\\x0C\\x15\\xF4\\xF4G=J\n\r\\x98\\xCE\\x81\\x94\\x15\\xF4\\xF4G=J\n\r\\xE3\\xBA8\\x9A\\x15\\xA7\\xC8F`J\n\r\\xE1\\x04\\xADA\\x15@_\\x06\\xE4J\n\r\\x14\\xAA\\\\\\x16\\x15\\xF4\\xF4G=J\n\r\\xBE\\xA6\\xF3\\x06\\x15\\xDF\\x17J?J\n\r\\x87D=\\xE4\\x15\\x8E\\xEA\\xBE\\x96J\n\r\\x93\\xFD\\x06\\xA2\\x15\\xF4\\xF4G=J\n\r\\xBC\\xC6\\xB0\\xDA\\x15\\xDF\\x17J?J\n\r}"
		"\\x96\\x9D\\xD6\\x15.\\xC9\\x956P\\x04ZF\\x08\\x01\\x10\\x8C\\xE7\\xB1\\x85\\x06\\x18\\x86\\xD9\\xB1\\x85\\x06\"\\x17\n\t1.3.36.82\\x10\\x86\\xD9\\xB1\\x85\\x06\\x18\\x00 \\x00(\\x00*\\x1D\n\r90.0.4430.212\\x10\\x86\\xD9\\xB1\\x85\\x06\\x18\\x00 \\x1E(\\x81\\x80\\x0Cb\\x04CHBDj\\x0C\\x08\\x00\\x10\\x00\\x18\\x00 \\x058\\x06@\\x06\\x80\\x01\\xA0\\xC3\\xAA\\xF5\\x05\\x90\\x01\\x16\\x90\\x01="
		"\\x90\\x01\\x96\\x01\\x90\\x01\\xB3\\x01\\x90\\x01\\x80\\x02\\x90\\x01\\x95\\x02\\x90\\x01\\xB3\\x02\\x90\\x01\\x8B\\x03\\x90\\x01\\xBA\\x03\\x90\\x01\\xE9\\x03\\x90\\x01\\x91\\x04\\x90\\x01\\xE5\\x04\\x90\\x01\\xF6\\x04\\x90\\x01\\x97\\x05\\x90\\x01\\x89\\x06\\x90\\x01\\xA2\\x06\\x90\\x01\\xD9\\x06\\x90\\x01\\xDE\\x06\\x98\\x01\\x01\\xB0\\x01\\x01\\xBA\\x01\\x0C\\x15i\\x04u~%\\x00\\x00\\x00\\x00(\\x00\\xC2\\x01\\x0F\\x08\\x0B\\x12\\x069.27.0\\x1Dv\\xCF\\x02C\\xC2\\x01\n"
		"\\x08\\x08\\x12\\x017\\x1D\\xC0^Q\\xFD\\xC2\\x01\\x13\\x08\\x0C\\x12\n90.262.200\\x1D\\x9A\\xCD\\xB7H\\xC2\\x01\r\\x08\n\\x12\\x046626\\x1Dy\\xA9\\xDD\\xE3\\xC2\\x01\\x15\\x08\\x06\\x12\\x0C0.57.44.2492\\x1D=\\xC9ko\\xC2\\x01\\x0B\\x08\\x02\\x12\\x0243\\x1D\\xD7\\xD2\\xD1\\xFF\\xC2\\x01\\x10\\x08\\x03\\x12\\x071.0.0.8\\x1D\\xED\\xBD1'\\xC2\\x01\\x0C\\x08\\x12\\x12\\x03281\\x1D\\xD8;`C\\xC2\\x01\\x14\\x08\r\\x12\\x0B4.10.2209.0\\x1D\\x00\\x00\\x00\\x00\\xC2\\x01\n"
		"\\x08\\x1B\\x12\\x011\\x1D\\x15\\xA9\\x8AG\\xCA\\x01\\x1F\\x08\\x05\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x05\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x02 \\x00"
		"(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x05\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x06\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x06\\x18\\x02 "
		"\\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x06\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x01\\x18\\x02 \\x01(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00"
		"(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x01\\x18\\x02 \\x01(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 "
		"\\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x06\\x10\n\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\n\\x18\\x02 \\x00"
		"(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xE2\\x01\\x1620210525-002128.861211\\xF8\\x01\\xFE\\x02\\x80\\x02\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\x01\\x88\\x02\\x01\\x92\\x02$1ae88a0f-c87e-45d4-a5a5-73e710c0b29a2\\x0F\t\\x17\\xF9\\xCB\\xEA\\x16s\\xCD\\x8C\\x10d\\x1A\\x02\\x10e2\\x0F\t\\xEB\\x82h-\\xB8\\x12\\x0E\\xFC\\x10\\x01\\x1A\\x02\\x10\\x022\r\tVM\\xC4\\xD3\\xE0\\x1D],\\x1A\\x02\\x10\\x01", 
		"LAST");

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,gcmjkmgdlgnkkcocmoeiminaijmmjnii,hnimpnehoodheedghdeeijklkeaacbdc,cmahhnpholdijhjokonmfdjbfmklppij,obedbbhbpmojnkanicioggnmelmoomoc,oimompecagnajdejgnnjijobebaeigek,lmelglejhemejginpboagddgdfbepgmp,kiabhabjdbkjdpjbpigfodbdjmbglcoo,giekcmmlnklenlaomppkphknjmnnpneh,khaoiebndkojlmppeemjhbpbandiljpe,hfnkpimlhhgieaddgfemjhofmfblmnib,llkgjffcdpffmhiakmfcdcblohccpfmo,aemomkdncapdnfajjbbcbdebjljbpmpj,ehgidpndbllacpjalkiimkbadgjfnnmc,gkmgaooipdjhmangpemjhigmamcehddo,"
		"jflookgnkcckhobaglndicnbbgbonegd,ggkkehgbnfjpeggfpleeakpidbkibbmn,jamhcnnkihinmdlkakkaopbjbbcngflc,ojhpjlocmbogdgmfpkhlaaeamibhnphh,pdafiollngonhoadbmdoemagnfpdphbe,eeigpngbgcognadeebkilcpcaedhellh");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-90.0.4430.212");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=10:3305111887&cup2hreq=21b86f4f95ae8d365f8e5cf0e710deca6073ff65c010709603f78b8b6dbf7212", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"CHBD\",\"cohort\":\"1::\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{288875bb-6f5a-43a8-934d-24e48b346937}\",\"rd\":5257},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"CHBD\",\"cohort\":\"1:bm1/zx9:\",\"cohorthint\":\"TenPercent_9_27\",\"cohortname\":\"TenPercent_9_27\",\""
		"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.4302cf764844fc6ca4cd4de8cf5e13481c4dd15b4bd8d667869f9ae2fb54f9bd\"}]},\"ping\":{\"ping_freshness\":\"{e4b30cc2-518f-4714-9e61-a2df3f1300da}\",\"rd\":5257},\"updatecheck\":{},\"version\":\"9.27.0\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"CHBD\",\"cohort\":\"1::\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\""
		"{a94ccaff-2eb8-479b-bad5-d0edae9753bb}\",\"rd\":5257},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"cmahhnpholdijhjokonmfdjbfmklppij\",\"brand\":\"CHBD\",\"cohort\":\"1:wr3:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.b4ddbdce4f8d5c080328aa34c19cb533f2eedec580b5d97dc14f74935e4756b7\"}]},\"ping\":{\"ping_freshness\":\"{33a71615-8cfa-431b-84f2-8c8eaaee03bb}\",\"rd\":5257},\"updatecheck\":{},\"version\":\"1.0.6\"},{\""
		"accept_locale\":\"ENUS\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"CHBD\",\"cohort\":\"1:s6f:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.43f292cadcfbe7b43d09d11efdc0a566e4d91cd93537f91f03be740b4aeea906\"}]},\"ping\":{\"ping_freshness\":\"{1cef2b28-e71b-4254-8468-eb54676329aa}\",\"rd\":5257},\"updatecheck\":{},\"version\":\"20210504.372334815\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"CHBD\",\""
		"cohort\":\"1::\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{1ca440f8-e404-4bd7-a945-c0e2ed2d9b95}\",\"rd\":5257},\"updatecheck\":{},\"version\":\"4.10.2209.0\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"CHBD\",\"cohort\":\"1:lwl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.43603bd8ed4d0b1675ad182598012c4ce14e39ea3da7d17da89ef98d83eb6986\"}]},\"ping\":{\"ping_freshness\":\"{c2c63dbb-7310-43e4-9a6a-c970530f5c46}\","
		"\"rd\":5257},\"updatecheck\":{},\"version\":\"281\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"CHBD\",\"cohort\":\"1:v3l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.4e0b9bdeebae75d67c83eabd03ae8884be7c632e8332615e53b153a90c379ce8\"}]},\"ping\":{\"ping_freshness\":\"{5543eb3a-fa76-4fa3-ad5d-a289641a86b5}\",\"rd\":5257},\"updatecheck\":{},\"version\":\"2021.5.23.2\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\""
		"brand\":\"CHBD\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{2cc77db9-f4d1-4a95-af2e-aa3cc8dedce0}\",\"rd\":5257},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"CHBD\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\""
		":{\"package\":[{\"fp\":\"1.ffd1d2d75a8183b0a1081bd03a7ce1d140fded7a9fb52cf3ae864cd4d408ceb4\"}]},\"ping\":{\"ping_freshness\":\"{54480f11-73c7-4e2a-9e00-995bc3236db5}\",\"rd\":5257},\"updatecheck\":{},\"version\":\"43\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"CHBD\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.e3dda979050283b9dfa0173936b698bb1fac397da72bc1adb057a7cbc8dd020a\"}]},\"ping\":{\""
		"ping_freshness\":\"{c6496ee2-a1fc-40af-bf21-6a7d54c4c18b}\",\"rd\":5257},\"updatecheck\":{},\"version\":\"6626\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"CHBD\",\"cohort\":\"1::\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.2731bdeddb1470bf2f7ae9c585e7315be52a8ce98b8af698ece8e500426e378a\"}]},\"ping\":{\"ping_freshness\":\"{b00c6568-c3bf-4f5b-be11-9a0b496e76c5}\",\"rd\":5257},\"updatecheck\":{},\"version\":\"1.0.0.8\"},{\"appid\":\"aemomkdncapdnfajjbbcbdebjljbpmpj\""
		",\"brand\":\"CHBD\",\"cohort\":\"1::\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{00c50a85-59ac-4c2d-b93e-7ba48554231a}\",\"rd\":5257},\"updatecheck\":{},\"version\":\"1.0.5.0\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"CHBD\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\""
		"{2c342496-5592-49ed-9be9-d048a7016f09}\",\"rd\":5257},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"CHBD\",\"cohort\":\"1:pw3:\",\"cohorthint\":\"Stable\",\"cohortname\":\"Stable\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.48b7cd9a9a4134d608effe24870c91e3bfc6a097c1472878a0c6d8b61f87d0fe\"}]},\"ping\":{\"ping_freshness\":\"{caede889-467b-41eb-bd38-82e294006658}\",\"rd\":5257},\"tag\":\"eset_exp_b\",\"updatecheck\":{},\""
		"version\":\"90.262.200\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"CHBD\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.c340344861c5ef742a98980db1870ca4b6792dc052c1dabed7e99a878f2fcd53\"}]},\"ping\":{\"ping_freshness\":\"{00d7c3c7-319d-40d7-9c7d-b807446a44c8}\",\"rd\":5257},\"updatecheck\":{},\"version\":\"2638\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"CHBD\",\"cohort\":\"1:ut9"
		":zx3@0.01\",\"cohorthint\":\"M80ToM99\",\"cohortname\":\"M80ToM99\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.4fef11754f09b4a645fb212e716a3fa3434c36e3398e9a08b4c03c446f6318be\"}]},\"ping\":{\"ping_freshness\":\"{24e4068d-0d7a-482b-b99a-3f2408430049}\",\"rd\":5257},\"updatecheck\":{},\"version\":\"2021.5.17.1141\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"CHBD\",\"cohort\":\"1:wvr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\""
		"package\":[{\"fp\":\"1.1a884bc956c30bb26d47881a74ee3d8da218d8fad5f93560353fc7e44ad038ba\"}]},\"ping\":{\"ping_freshness\":\"{1103228e-ed6a-4c6e-8d9d-fb62eb5a96aa}\",\"rd\":5257},\"updatecheck\":{},\"version\":\"93.0.4522.0\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"CHBD\",\"cohort\":\"1:w0x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.478aa915e78878e332a0b4bb4d2a6fb67ff1c7f7b62fe906f47095ba5ae112d0\"}]},\"ping\":{\""
		"ping_freshness\":\"{1b9e1dc3-cc62-43bf-8b60-7a90bf161b1a}\",\"rd\":5257},\"updatecheck\":{},\"version\":\"1\"},{\"appid\":\"pdafiollngonhoadbmdoemagnfpdphbe\",\"brand\":\"CHBD\",\"cohort\":\"1:vz3:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.baeb7c645c7704139756b02bf2741430d94ea3835fb1de77fef1057d8c844655\"}]},\"ping\":{\"ping_freshness\":\"{617392f3-b9c4-4f69-afb7-a32b923605c8}\",\"rd\":5257},\"updatecheck\":{},\"version\":\""
		"2021.2.22.1142\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"CHBD\",\"cohort\":\"1:w59:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{7856b318-2d6d-4547-85f9-f1ae72b376be}\",\"rd\":5257},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":16"
		"},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19042.928\"},\"prodversion\":\"90.0.4430.212\",\"protocol\":\"3.1\",\"requestid\":\"{7c120312-579b-43a0-8fd0-ae14397dbe49}\",\"sessionid\":\"{6e60356d-a714-44d0-84ac-166e9187694d}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.82\"},\"updaterversion\":\"90.0.4430.212\""
		"}}", 
		"LAST");

	web_add_header("Origin", 
		"https://blazedemo.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_submit_data("purchase.php", 
		"Action=https://blazedemo.com/purchase.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://blazedemo.com/reserve.php", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=flight", "Value=234", "ENDITEM", 
		"Name=price", "Value=432.98", "ENDITEM", 
		"Name=airline", "Value=United Airlines", "ENDITEM", 
		"Name=fromPort", "Value=Paris", "ENDITEM", 
		"Name=toPort", "Value=London", "ENDITEM", 
		"LAST");

	return 0;
}
# 5 "c:\\users\\chirag.mathur\\documents\\scripts\\gitdemo\\\\combined_GitDemo.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "c:\\users\\chirag.mathur\\documents\\scripts\\gitdemo\\\\combined_GitDemo.c" 2

