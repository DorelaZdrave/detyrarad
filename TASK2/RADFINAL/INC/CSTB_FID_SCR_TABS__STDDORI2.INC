DELETE CSTB_FID_SCR_TABS A  WHERE A.FUNCTION_ID = 'STDDORI2' ;
INSERT INTO CSTB_FID_SCR_TABS(FUNCTION_ID,SCREEN_NAME,SCREEN_PORTION,TAB_NAME,TAB_LABEL) VALUES(
'STDDORI2',
'CVS_DORI2',
'HEADER',
'TAB_HEADER',
NULL);
INSERT INTO CSTB_FID_SCR_TABS(FUNCTION_ID,SCREEN_NAME,SCREEN_PORTION,TAB_NAME,TAB_LABEL) VALUES(
'STDDORI2',
'CVS_DORI2',
'BODY',
'TAB_MAIN',
NULL);
INSERT INTO CSTB_FID_SCR_TABS(FUNCTION_ID,SCREEN_NAME,SCREEN_PORTION,TAB_NAME,TAB_LABEL) VALUES(
'STDDORI2',
'CVS_DORI2',
'FOOTER',
'TAB_FOOTER',
NULL);
COMMIT;