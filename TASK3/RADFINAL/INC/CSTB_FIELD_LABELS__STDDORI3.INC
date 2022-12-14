DELETE CSTB_FIELD_LABELS A  WHERE A.FUNCTION_ID = 'STDDORI3' ;
INSERT INTO CSTB_FIELD_LABELS(FUNCTION_ID,FIELD_ID,BLOCK_NAME,FIELD_NAME,DATA_SOURCE,COLUMN_NAME,XSD_NODE,XSD_TAG,LABEL_CODE,MANDATORY,READONLY,DATATYPE,MAXLENGTH,MAX_DECIMALS,ITEM_TYPE,DISPLAY_TYPE,VISIBLE,FIELD_SET_NAME,SCREEN_NAME,TAB_NAME,HELP_FILENAME,SOURCE_HELPFILE_NAME,OLD_HELP_FILENAME) VALUES(
'STDDORI3',
'BLK_MAIN.BTN_POPULATE',
'BLK_MAIN',
'BTN_POPULATE',
NULL,
NULL,
'Main',
'POPULATE',
'LBL_POPULATE',
'N',
'N',
NULL,
NULL,
NULL,
'CONTROL',
'BUTTON',
'Y',
'FST_MAIN2',
'CVS_MAIN',
'TAB_MAIN',
NULL,
NULL,
NULL);
INSERT INTO CSTB_FIELD_LABELS(FUNCTION_ID,FIELD_ID,BLOCK_NAME,FIELD_NAME,DATA_SOURCE,COLUMN_NAME,XSD_NODE,XSD_TAG,LABEL_CODE,MANDATORY,READONLY,DATATYPE,MAXLENGTH,MAX_DECIMALS,ITEM_TYPE,DISPLAY_TYPE,VISIBLE,FIELD_SET_NAME,SCREEN_NAME,TAB_NAME,HELP_FILENAME,SOURCE_HELPFILE_NAME,OLD_HELP_FILENAME) VALUES(
'STDDORI3',
'BLK_MAIN.CUSTOMER_CATEGORY',
'BLK_MAIN',
'CUSTOMER_CATEGORY',
'STTMS_DORI_CUST_MASTER_FCUST',
'CUSTOMER_CATEGORY',
'Main',
'CUSTOMER_CATEGORY',
'LBL_CUSTOMER_CATEGORY',
'N',
'N',
'VARCHAR2',
15,
NULL,
'DBITEM',
'LOV',
'Y',
'FST_MAIN2',
'CVS_MAIN',
'TAB_MAIN',
NULL,
NULL,
NULL);
INSERT INTO CSTB_FIELD_LABELS(FUNCTION_ID,FIELD_ID,BLOCK_NAME,FIELD_NAME,DATA_SOURCE,COLUMN_NAME,XSD_NODE,XSD_TAG,LABEL_CODE,MANDATORY,READONLY,DATATYPE,MAXLENGTH,MAX_DECIMALS,ITEM_TYPE,DISPLAY_TYPE,VISIBLE,FIELD_SET_NAME,SCREEN_NAME,TAB_NAME,HELP_FILENAME,SOURCE_HELPFILE_NAME,OLD_HELP_FILENAME) VALUES(
'STDDORI3',
'BLK_MAIN.CUSTOMER_TYPE',
'BLK_MAIN',
'CUSTOMER_TYPE',
'STTMS_DORI_CUST_MASTER_FCUST',
'CUSTOMER_TYPE',
'Main',
'CUSTOMER_TYPE',
'LBL_CUSTOMER_TYPE',
'Y',
'N',
'VARCHAR2',
35,
NULL,
'DBITEM',
'SELECT',
'Y',
'FST_MAIN',
'CVS_MAIN',
'TAB_MAIN',
NULL,
NULL,
NULL);
INSERT INTO CSTB_FIELD_LABELS(FUNCTION_ID,FIELD_ID,BLOCK_NAME,FIELD_NAME,DATA_SOURCE,COLUMN_NAME,XSD_NODE,XSD_TAG,LABEL_CODE,MANDATORY,READONLY,DATATYPE,MAXLENGTH,MAX_DECIMALS,ITEM_TYPE,DISPLAY_TYPE,VISIBLE,FIELD_SET_NAME,SCREEN_NAME,TAB_NAME,HELP_FILENAME,SOURCE_HELPFILE_NAME,OLD_HELP_FILENAME) VALUES(
'STDDORI3',
'BLK_MAIN.MAKER',
'BLK_MAIN',
'MAKER',
'STTMS_DORI_CUST_MASTER_FCUST',
'MAKER_ID',
'Main',
'MAKER',
'LBL_MAKER',
NULL,
'Y',
'VARCHAR2',
12,
NULL,
'DBITEM',
'TEXT',
'Y',
NULL,
NULL,
NULL,
NULL,
NULL,
NULL);
INSERT INTO CSTB_FIELD_LABELS(FUNCTION_ID,FIELD_ID,BLOCK_NAME,FIELD_NAME,DATA_SOURCE,COLUMN_NAME,XSD_NODE,XSD_TAG,LABEL_CODE,MANDATORY,READONLY,DATATYPE,MAXLENGTH,MAX_DECIMALS,ITEM_TYPE,DISPLAY_TYPE,VISIBLE,FIELD_SET_NAME,SCREEN_NAME,TAB_NAME,HELP_FILENAME,SOURCE_HELPFILE_NAME,OLD_HELP_FILENAME) VALUES(
'STDDORI3',
'BLK_MAIN.MAKERSTAMP',
'BLK_MAIN',
'MAKERSTAMP',
'STTMS_DORI_CUST_MASTER_FCUST',
'MAKER_DT_STAMP',
'Main',
'MAKERSTAMP',
'LBL_MAKERSTAMP',
NULL,
'Y',
'DATE',
25,
NULL,
'DBITEM',
'TEXT',
'Y',
NULL,
NULL,
NULL,
NULL,
NULL,
NULL);
INSERT INTO CSTB_FIELD_LABELS(FUNCTION_ID,FIELD_ID,BLOCK_NAME,FIELD_NAME,DATA_SOURCE,COLUMN_NAME,XSD_NODE,XSD_TAG,LABEL_CODE,MANDATORY,READONLY,DATATYPE,MAXLENGTH,MAX_DECIMALS,ITEM_TYPE,DISPLAY_TYPE,VISIBLE,FIELD_SET_NAME,SCREEN_NAME,TAB_NAME,HELP_FILENAME,SOURCE_HELPFILE_NAME,OLD_HELP_FILENAME) VALUES(
'STDDORI3',
'BLK_MAIN.CHECKER',
'BLK_MAIN',
'CHECKER',
'STTMS_DORI_CUST_MASTER_FCUST',
'CHECKER_ID',
'Main',
'CHECKER',
'LBL_CHECKER',
NULL,
'Y',
'VARCHAR2',
12,
NULL,
'DBITEM',
'TEXT',
'Y',
NULL,
NULL,
NULL,
NULL,
NULL,
NULL);
INSERT INTO CSTB_FIELD_LABELS(FUNCTION_ID,FIELD_ID,BLOCK_NAME,FIELD_NAME,DATA_SOURCE,COLUMN_NAME,XSD_NODE,XSD_TAG,LABEL_CODE,MANDATORY,READONLY,DATATYPE,MAXLENGTH,MAX_DECIMALS,ITEM_TYPE,DISPLAY_TYPE,VISIBLE,FIELD_SET_NAME,SCREEN_NAME,TAB_NAME,HELP_FILENAME,SOURCE_HELPFILE_NAME,OLD_HELP_FILENAME) VALUES(
'STDDORI3',
'BLK_MAIN.CHECKERSTAMP',
'BLK_MAIN',
'CHECKERSTAMP',
'STTMS_DORI_CUST_MASTER_FCUST',
'CHECKER_DT_STAMP',
'Main',
'CHECKERSTAMP',
'LBL_CHECKERSTAMP',
NULL,
'Y',
'DATE',
25,
NULL,
'DBITEM',
'TEXT',
'Y',
NULL,
NULL,
NULL,
NULL,
NULL,
NULL);
INSERT INTO CSTB_FIELD_LABELS(FUNCTION_ID,FIELD_ID,BLOCK_NAME,FIELD_NAME,DATA_SOURCE,COLUMN_NAME,XSD_NODE,XSD_TAG,LABEL_CODE,MANDATORY,READONLY,DATATYPE,MAXLENGTH,MAX_DECIMALS,ITEM_TYPE,DISPLAY_TYPE,VISIBLE,FIELD_SET_NAME,SCREEN_NAME,TAB_NAME,HELP_FILENAME,SOURCE_HELPFILE_NAME,OLD_HELP_FILENAME) VALUES(
'STDDORI3',
'BLK_MAIN.MODNO',
'BLK_MAIN',
'MODNO',
'STTMS_DORI_CUST_MASTER_FCUST',
'MOD_NO',
'Main',
'MODNO',
'LBL_MODNO',
NULL,
'Y',
'NUMBER',
4,
NULL,
'DBITEM',
'TEXT',
'Y',
NULL,
NULL,
NULL,
NULL,
NULL,
NULL);
INSERT INTO CSTB_FIELD_LABELS(FUNCTION_ID,FIELD_ID,BLOCK_NAME,FIELD_NAME,DATA_SOURCE,COLUMN_NAME,XSD_NODE,XSD_TAG,LABEL_CODE,MANDATORY,READONLY,DATATYPE,MAXLENGTH,MAX_DECIMALS,ITEM_TYPE,DISPLAY_TYPE,VISIBLE,FIELD_SET_NAME,SCREEN_NAME,TAB_NAME,HELP_FILENAME,SOURCE_HELPFILE_NAME,OLD_HELP_FILENAME) VALUES(
'STDDORI3',
'BLK_MAIN.TXNSTAT',
'BLK_MAIN',
'TXNSTAT',
'STTMS_DORI_CUST_MASTER_FCUST',
'RECORD_STAT',
'Main',
'TXNSTAT',
'LBL_TXNSTAT',
NULL,
'Y',
'VARCHAR2',
1,
NULL,
'DBITEM',
'CHECKBOX',
'Y',
NULL,
NULL,
NULL,
NULL,
NULL,
NULL);
INSERT INTO CSTB_FIELD_LABELS(FUNCTION_ID,FIELD_ID,BLOCK_NAME,FIELD_NAME,DATA_SOURCE,COLUMN_NAME,XSD_NODE,XSD_TAG,LABEL_CODE,MANDATORY,READONLY,DATATYPE,MAXLENGTH,MAX_DECIMALS,ITEM_TYPE,DISPLAY_TYPE,VISIBLE,FIELD_SET_NAME,SCREEN_NAME,TAB_NAME,HELP_FILENAME,SOURCE_HELPFILE_NAME,OLD_HELP_FILENAME) VALUES(
'STDDORI3',
'BLK_MAIN.AUTHSTAT',
'BLK_MAIN',
'AUTHSTAT',
'STTMS_DORI_CUST_MASTER_FCUST',
'AUTH_STAT',
'Main',
'AUTHSTAT',
'LBL_AUTHSTAT',
NULL,
'Y',
'VARCHAR2',
1,
NULL,
'DBITEM',
'CHECKBOX',
'Y',
NULL,
NULL,
NULL,
NULL,
NULL,
NULL);
INSERT INTO CSTB_FIELD_LABELS(FUNCTION_ID,FIELD_ID,BLOCK_NAME,FIELD_NAME,DATA_SOURCE,COLUMN_NAME,XSD_NODE,XSD_TAG,LABEL_CODE,MANDATORY,READONLY,DATATYPE,MAXLENGTH,MAX_DECIMALS,ITEM_TYPE,DISPLAY_TYPE,VISIBLE,FIELD_SET_NAME,SCREEN_NAME,TAB_NAME,HELP_FILENAME,SOURCE_HELPFILE_NAME,OLD_HELP_FILENAME) VALUES(
'STDDORI3',
'BLK_MAIN.ONCEAUTH',
'BLK_MAIN',
'ONCEAUTH',
'STTMS_DORI_CUST_MASTER_FCUST',
'ONCE_AUTH',
'Main',
'ONCEAUTH',
'LBL_ONCEAUTH',
NULL,
'Y',
'VARCHAR2',
1,
NULL,
'DBITEM',
'CHECKBOX',
'N',
NULL,
NULL,
NULL,
NULL,
NULL,
NULL);
INSERT INTO CSTB_FIELD_LABELS(FUNCTION_ID,FIELD_ID,BLOCK_NAME,FIELD_NAME,DATA_SOURCE,COLUMN_NAME,XSD_NODE,XSD_TAG,LABEL_CODE,MANDATORY,READONLY,DATATYPE,MAXLENGTH,MAX_DECIMALS,ITEM_TYPE,DISPLAY_TYPE,VISIBLE,FIELD_SET_NAME,SCREEN_NAME,TAB_NAME,HELP_FILENAME,SOURCE_HELPFILE_NAME,OLD_HELP_FILENAME) VALUES(
'STDDORI3',
'BLK_DETAIL.CUSTOMER_TYPE',
'BLK_DETAIL',
'CUSTOMER_TYPE',
'STTMS_DORI_FIELD_DETAIL_FCUST',
'CUSTOMER_TYPE',
'Detail',
'CUSTOMER_TYPE',
'LBL_CUSTOMER_TYPE',
'N',
'N',
'VARCHAR2',
35,
NULL,
'DBITEM',
'TEXT',
'N',
NULL,
NULL,
NULL,
NULL,
NULL,
NULL);
INSERT INTO CSTB_FIELD_LABELS(FUNCTION_ID,FIELD_ID,BLOCK_NAME,FIELD_NAME,DATA_SOURCE,COLUMN_NAME,XSD_NODE,XSD_TAG,LABEL_CODE,MANDATORY,READONLY,DATATYPE,MAXLENGTH,MAX_DECIMALS,ITEM_TYPE,DISPLAY_TYPE,VISIBLE,FIELD_SET_NAME,SCREEN_NAME,TAB_NAME,HELP_FILENAME,SOURCE_HELPFILE_NAME,OLD_HELP_FILENAME) VALUES(
'STDDORI3',
'BLK_DETAIL.FIELD_DESCRIPTION',
'BLK_DETAIL',
'FIELD_DESCRIPTION',
'STTMS_DORI_FIELD_DETAIL_FCUST',
'FIELD_DESCRIPTION',
'Detail',
'FIELD_DESCRIPTION',
'LBL_FIELD_DESCRIPTION',
'N',
'N',
'VARCHAR2',
35,
NULL,
'DBITEM',
'TEXT',
'Y',
'FST_DETAIL',
'CVS_MAIN',
'TAB_MAIN',
NULL,
NULL,
NULL);
INSERT INTO CSTB_FIELD_LABELS(FUNCTION_ID,FIELD_ID,BLOCK_NAME,FIELD_NAME,DATA_SOURCE,COLUMN_NAME,XSD_NODE,XSD_TAG,LABEL_CODE,MANDATORY,READONLY,DATATYPE,MAXLENGTH,MAX_DECIMALS,ITEM_TYPE,DISPLAY_TYPE,VISIBLE,FIELD_SET_NAME,SCREEN_NAME,TAB_NAME,HELP_FILENAME,SOURCE_HELPFILE_NAME,OLD_HELP_FILENAME) VALUES(
'STDDORI3',
'BLK_DETAIL.MANDATORY_VALIDATIONS',
'BLK_DETAIL',
'MANDATORY_VALIDATIONS',
'STTMS_DORI_FIELD_DETAIL_FCUST',
'MANDATORY_VALIDATIONS',
'Detail',
'MANDATORY_VALIDATIONS',
'LBL_MANDATORY_VALIDATIONS',
'N',
'N',
'VARCHAR2',
35,
NULL,
'DBITEM',
'SELECT',
'Y',
'FST_DETAIL',
'CVS_MAIN',
'TAB_MAIN',
NULL,
NULL,
NULL);
COMMIT;