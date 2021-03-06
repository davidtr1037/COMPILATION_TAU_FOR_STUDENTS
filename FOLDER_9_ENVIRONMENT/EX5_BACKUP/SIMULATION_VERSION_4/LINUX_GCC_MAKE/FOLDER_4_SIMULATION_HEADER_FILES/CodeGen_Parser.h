typedef union
{
	union
	{
		int								ival;
		int								temp_serial_number;
		float							fval;
		string							sval;
		string							register_name;
		PSEUDO_MIPS_ASM_AST_LabelList	labelList;
		PSEUDO_MIPS_ASM_AST_Var			var;
		PSEUDO_MIPS_ASM_AST_Label_Type_	label;
		PSEUDO_MIPS_ASM_AST_exp			exp;
		PSEUDO_MIPS_ASM_AST_expList		expList;
	}
	gval;
} YYSTYPE;
#define	INT	258
#define	FLOAT	259
#define	STRING	260
#define	VFTABLE	261
#define	PRINT_INT	262
#define	PRINT_CHAR	263
#define	STRING_VAR	264
#define	ALLOCATE	265
#define	EXIT	266
#define	ID	267
#define	LABEL	268
#define	COMMA	269
#define	COLON	270
#define	LOAD	271
#define	STORE	272
#define	LOAD_IMMEDIATE	273
#define	LOAD_ADDRESS	274
#define	LOAD_BYTE	275
#define	ADD_IMMEDIATE	276
#define	JUMP	277
#define	JUMP_AND_LINK	278
#define	JUMP_AND_LINK_REG	279
#define	LPAREN	280
#define	RPAREN	281
#define	PLUS	282
#define	MINUS	283
#define	ADD	284
#define	SUB	285
#define	MUL	286
#define	DIV	287
#define	TEMP	288
#define	BEQ	289
#define	BNE	290
#define	BLT	291
#define	BLE	292
#define	BGT	293
#define	BGE	294
#define	REGISTER	295
#define	AND	296
#define	OR	297
#define	MOVE	298


extern YYSTYPE zzlval;
