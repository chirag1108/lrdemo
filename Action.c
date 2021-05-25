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
		LAST);

	web_revert_auto_header("Sec-Fetch-Site");

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
		EXTRARES, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_8.pb", "Referer=", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABA3d3dwdnc3RhdGljA2NvbQAAAQABAAApEAAAAAAAAFQADABQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://cdn.mxpnl.com/libs/mixpanel-2.2.min.js", "Referer=", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABCWJsYXplZGVtbwNjb20AAAEAAQAAKRAAAAAAAABWAAwAUgAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=/favicon.ico", ENDITEM, 
		LAST);

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
		LAST);

	web_revert_auto_header("Origin");

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
		LAST);

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
		EXTRARES, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABDmNsaWVudHNlcnZpY2VzCmdvb2dsZWFwaXMDY29tAAABAAEAACkQAAAAAAAARgAMAEIAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		LAST);

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
		ITEMDATA, 
		"Name=fromPort", "Value=Paris", ENDITEM, 
		"Name=toPort", "Value=London", ENDITEM, 
		EXTRARES, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABBnVwZGF0ZQpnb29nbGVhcGlzA2NvbQAAAQABAAApEAAAAAAAAE4ADABKAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

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
		LAST);

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
		LAST);

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
		ITEMDATA, 
		"Name=flight", "Value=234", ENDITEM, 
		"Name=price", "Value=432.98", ENDITEM, 
		"Name=airline", "Value=United Airlines", ENDITEM, 
		"Name=fromPort", "Value=Paris", ENDITEM, 
		"Name=toPort", "Value=London", ENDITEM, 
		LAST);

	return 0;
}