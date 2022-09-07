CREATE TABLE STTM_DOWI_GROUP_FCUST(
GROUP_CODE VARCHAR2(35),
DESCRIPTION VARCHAR2(35),
EXPOSURE_CATEGORY VARCHAR2(35),
GROUP_STATUS VARCHAR2(35),
SINCE DATE,
GROUP_TYPE VARCHAR2(35),
  auth_stat          CHAR(1) default 'U',
  record_stat        CHAR(1) default 'O',
  mod_no             NUMBER(4),
  checker_date_stamp DATE,
  audit_auth         CHAR(1) default 'N',
  maker_id           VARCHAR2(12),
  maker_dt_stamp     DATE,
  checker_id         VARCHAR2(12),
  CONSTRAINT PK_DOWI_GROUP_FCUST PRIMARY KEY (GROUP_CODE));

CREATE OR REPLACE SYNONYM STTMS_DOWI_GROUP_FCUST FOR STTM_DOWI_GROUP_FCUST;

CREATE TABLE STTM_DORI_EXPOSURE_CATEGORY_FCUST(
EXPOSURE_CATEGORY  VARCHAR2(35));

CREATE OR REPLACE SYNONYM STTMS_DORI_EXPOSURE_CATEGORY_FCUST FOR STTM_DORI_EXPOSURE_CATEGORY_FCUST;

