DELETE CSTB_SUMMARY_INFO A  WHERE A.FUNCTION_ID = 'STSDORI3' ;
INSERT INTO CSTB_SUMMARY_INFO(FUNCTION_ID,SUMMARY_QUERY,TANKED_SUMMARY_QUERY,FIELD_LIST,COLUMN_LIST,DATATYPE_LIST,MULTIBRN_SUMMARY_QUERY,TANKED_MULTIBRN_SUMMARY_QUERY) VALUES(
'STSDORI3',
'SELECT AUTH_STAT AS AUTHSTAT,RECORD_STAT AS TXNSTAT,CUSTOMER_TYPE AS CUSTOMER_TYPE,CUSTOMER_CATEGORY AS CUSTOMER_CATEGORY FROM STTM_DORI_CUST_MASTER_FCUST SUMMARYDSN',
'SELECT AUTH_STAT AS AUTHSTAT,RECORD_STAT AS TXNSTAT,CHAR_FLD_1 AS CUSTOMER_TYPE,CHAR_FLD_2 AS CUSTOMER_CATEGORY FROM  STTB_RECORD_MASTER  SUMMARYDSN WHERE FUNCTION_ID = ''STDDORI3''',
'AUTHSTAT~TXNSTAT~CUSTOMER_TYPE~CUSTOMER_CATEGORY~',
'AUTH_STAT~RECORD_STAT~CUSTOMER_TYPE~CUSTOMER_CATEGORY~',
'VARCHAR2~VARCHAR2~VARCHAR2~VARCHAR2~',
'SELECT AUTH_STAT AS AUTHSTAT,RECORD_STAT AS TXNSTAT,CUSTOMER_TYPE AS CUSTOMER_TYPE,CUSTOMER_CATEGORY AS CUSTOMER_CATEGORY FROM STTM_DORI_CUST_MASTER_FCUST SUMMARYDSN',
'SELECT AUTH_STAT AS AUTHSTAT,RECORD_STAT AS TXNSTAT,CHAR_FLD_1 AS CUSTOMER_TYPE,CHAR_FLD_2 AS CUSTOMER_CATEGORY FROM  STTB_RECORD_MASTER SUMMARYDSN WHERE FUNCTION_ID = ''STDDORI3''');
COMMIT;