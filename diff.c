	struct strbuf res;
	strbuf_init(&res, 0);
	quote_two_c_style(&a_name, o->a_prefix, name_a, 0);
	quote_two_c_style(&b_name, o->b_prefix, name_b, 0);
	struct xdiff_emit_state xm;
	ecb.outf = xdiff_outf;
	ecb.priv = diff_words;
	diff_words->xm.consume = fn_out_diff_words_aux;
	xdi_diff(&minus, &plus, &xpp, &xecfg, &ecb);

	struct xdiff_emit_state xm;
	struct strbuf name;
	strbuf_init(&name, 0);
	struct xdiff_emit_state xm;

		struct strbuf buf;
		strbuf_init(&buf, 0);
		 * made to the preimage.
	struct xdiff_emit_state xm;
	  "|"
	{ "bibtex", "(@[a-zA-Z]{1,}[ \t]*\\{{0,1}[ \t]*[^ \t\"@',\\#}{~%]*).*$",
	{ "ruby", "^[ \t]*((class|module|def)[ \t].*)$",
	  REG_EXTENDED },
	a_one = quote_two(o->a_prefix, name_a + (*name_a == '/'));
	b_two = quote_two(o->b_prefix, name_b + (*name_b == '/'));
		ecb.outf = xdiff_outf;
		ecb.priv = &ecbdata;
		ecbdata.xm.consume = fn_out_consume;
		xdi_diff(&mf1, &mf2, &xpp, &xecfg, &ecb);
		ecb.outf = xdiff_outf;
		ecb.priv = diffstat;
		xdi_diff(&mf1, &mf2, &xpp, &xecfg, &ecb);
	data.xm.consume = checkdiff_consume;
		ecb.outf = xdiff_outf;
		ecb.priv = &data;
		xdi_diff(&mf1, &mf2, &xpp, &xecfg, &ecb);
	struct strbuf buf;
	strbuf_init(&buf, 0);
		struct strbuf buf;
		strbuf_init(&buf, 0);
	options->a_prefix = "a/";
	options->b_prefix = "b/";
	struct xdiff_emit_state xm;
	SHA_CTX *ctx;
	SHA1_Update(data->ctx, line, new_len);
	SHA_CTX ctx;
	SHA1_Init(&ctx);
	data.xm.consume = patch_id_consume;
		SHA1_Update(&ctx, buffer, len1);
		ecb.outf = xdiff_outf;
		ecb.priv = &data;
		xdi_diff(&mf1, &mf2, &xpp, &xecfg, &ecb);
	SHA1_Final(sha1, &ctx);
		diffstat.xm.consume = diffstat_consume;