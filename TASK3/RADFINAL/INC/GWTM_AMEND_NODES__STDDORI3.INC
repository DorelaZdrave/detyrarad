DELETE GWTM_AMEND_NODES A  WHERE A.EXT_SYSTEM = 'FLEXCUBE' AND RAD_FUNCTION_ID = 'STDDORI3' ;
INSERT INTO GWTM_AMEND_NODES(EXT_SYSTEM,SOURCE_OPERATION,NODE_NAME,NEW_ALLOWED,DELETE_ALLOWED,ALL_RECORDS,RAD_FUNCTION_ID,ORIGIN_SYSTEM) VALUES(
'FLEXCUBE',
'STDDORI3_EXECUTEQUERY',
'STTMS_DORI_FIELD_DETAIL_FCUST',
'N',
'N',
'Y',
'STDDORI3',
'FLEXCUBE');
INSERT INTO GWTM_AMEND_NODES(EXT_SYSTEM,SOURCE_OPERATION,NODE_NAME,NEW_ALLOWED,DELETE_ALLOWED,ALL_RECORDS,RAD_FUNCTION_ID,ORIGIN_SYSTEM) VALUES(
'FLEXCUBE',
'STDDORI3_EXECUTEQUERY',
'STTMS_DORI_CUST_MASTER_FCUST',
'N',
'N',
'Y',
'STDDORI3',
'FLEXCUBE');
INSERT INTO GWTM_AMEND_NODES(EXT_SYSTEM,SOURCE_OPERATION,NODE_NAME,NEW_ALLOWED,DELETE_ALLOWED,ALL_RECORDS,RAD_FUNCTION_ID,ORIGIN_SYSTEM) VALUES(
'FLEXCUBE',
'STDDORI3_NEW',
'STTMS_DORI_FIELD_DETAIL_FCUST',
'N',
'N',
'Y',
'STDDORI3',
'FLEXCUBE');
INSERT INTO GWTM_AMEND_NODES(EXT_SYSTEM,SOURCE_OPERATION,NODE_NAME,NEW_ALLOWED,DELETE_ALLOWED,ALL_RECORDS,RAD_FUNCTION_ID,ORIGIN_SYSTEM) VALUES(
'FLEXCUBE',
'STDDORI3_NEW',
'STTMS_DORI_CUST_MASTER_FCUST',
'N',
'N',
'Y',
'STDDORI3',
'FLEXCUBE');
INSERT INTO GWTM_AMEND_NODES(EXT_SYSTEM,SOURCE_OPERATION,NODE_NAME,NEW_ALLOWED,DELETE_ALLOWED,ALL_RECORDS,RAD_FUNCTION_ID,ORIGIN_SYSTEM) VALUES(
'FLEXCUBE',
'STDDORI3_MODIFY',
'STTMS_DORI_FIELD_DETAIL_FCUST',
'N',
'N',
'Y',
'STDDORI3',
'FLEXCUBE');
INSERT INTO GWTM_AMEND_NODES(EXT_SYSTEM,SOURCE_OPERATION,NODE_NAME,NEW_ALLOWED,DELETE_ALLOWED,ALL_RECORDS,RAD_FUNCTION_ID,ORIGIN_SYSTEM) VALUES(
'FLEXCUBE',
'STDDORI3_MODIFY',
'STTMS_DORI_CUST_MASTER_FCUST',
'N',
'N',
'Y',
'STDDORI3',
'FLEXCUBE');
COMMIT;