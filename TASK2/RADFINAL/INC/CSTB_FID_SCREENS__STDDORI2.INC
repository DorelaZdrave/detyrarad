DELETE CSTB_FID_SCREENS A  WHERE A.FUNCTION_ID = 'STDDORI2' ;
INSERT INTO CSTB_FID_SCREENS(FUNCTION_ID,SCREEN_NAME,SCREEN_LABEL,MAIN_SCREEN,SCREEN_SIZE,EXIT_BUTTON_TYPE,SCREEN_ARGS,TAB_COUNTS) VALUES(
'STDDORI2',
'CVS_DORI2',
NULL,
'Y',
'MEDIUM',
'1',
NULL,
NULL);
COMMIT;