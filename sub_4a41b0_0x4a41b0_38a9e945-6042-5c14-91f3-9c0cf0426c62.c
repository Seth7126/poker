// ============================================================
// 函数名称: sub_4a41b0
// 虚拟地址: 0x4a41b0
// WARP GUID: 38a9e945-6042-5c14-91f3-9c0cf0426c62
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: LoadLibraryA
// [内部子函数调用]: sub_4a4084, sub_4a40f4, sub_4a4140
// [被调用的父级函数]: sub_4aa9c8
// ============================================================

int32_tsub_4a41b0()
{
    // 第一条实际指令: int32_t result
    int32_t result
    result.b = 1
    
    if (data_52fd64 == 0)
        data_52fd64 = LoadLibraryA("libeay32.dll")
    
    if (data_52fd60 == 0)
        HMODULE eax_2
        void* ecx_1
        int32_t edx_1
        eax_2, ecx_1, edx_1 = LoadLibraryA("ssleay32.dll")
        data_52fd60 = eax_2
        int32_t* eax_3
        void* ecx_2
        int32_t edx_2
        eax_3, ecx_2, edx_2 = sub_4a4084("SSL_CTX_set_cipher_list", edx_1, ecx_1)
        data_52fc24 = eax_3
        int32_t* eax_4
        void* ecx_3
        int32_t edx_3
        eax_4, ecx_3, edx_3 = sub_4a4084("SSL_CTX_new", edx_2, ecx_2)
        data_52fc28 = eax_4
        int32_t* eax_5
        void* ecx_4
        int32_t edx_4
        eax_5, ecx_4, edx_4 = sub_4a4084("SSL_CTX_free", edx_3, ecx_3)
        data_52fc2c = eax_5
        int32_t* eax_6
        void* ecx_5
        int32_t edx_5
        eax_6, ecx_5, edx_5 = sub_4a4084("SSL_set_fd", edx_4, ecx_4)
        data_52fc30 = eax_6
        int32_t* eax_7
        void* ecx_6
        int32_t edx_6
        eax_7, ecx_6, edx_6 = sub_4a4084("SSL_CTX_use_PrivateKey_file", edx_5, ecx_5)
        data_52fc34 = eax_7
        int32_t* eax_8
        void* ecx_7
        int32_t edx_7
        eax_8, ecx_7, edx_7 = sub_4a4084("SSL_CTX_use_certificate_file", edx_6, ecx_6)
        data_52fc38 = eax_8
        int32_t* eax_9
        void* ecx_8
        int32_t edx_8
        eax_9, ecx_8, edx_8 = sub_4a4084("SSL_load_error_strings", edx_7, ecx_7)
        data_52fc3c = eax_9
        int32_t* eax_10
        void* ecx_9
        int32_t edx_9
        eax_10, ecx_9, edx_9 = sub_4a4084("SSL_state_string_long", edx_8, ecx_8)
        data_52fc40 = eax_10
        int32_t* eax_11
        void* ecx_10
        int32_t edx_10
        eax_11, ecx_10, edx_10 = sub_4a4084("SSL_get_peer_certificate", edx_9, ecx_9)
        data_52fc44 = eax_11
        int32_t* eax_12
        void* ecx_11
        int32_t edx_11
        eax_12, ecx_11, edx_11 = sub_4a4084("SSL_CTX_set_verify", edx_10, ecx_10)
        data_52fc48 = eax_12
        int32_t* eax_13
        void* ecx_12
        int32_t edx_12
        eax_13, ecx_12, edx_12 = sub_4a4084("SSL_CTX_set_verify_depth", edx_11, ecx_11)
        data_52fc4c = eax_13
        int32_t* eax_14
        void* ecx_13
        int32_t edx_13
        eax_14, ecx_13, edx_13 = sub_4a4084("SSL_CTX_get_verify_depth", edx_12, ecx_12)
        data_52fc50 = eax_14
        int32_t* eax_15
        void* ecx_14
        int32_t edx_14
        eax_15, ecx_14, edx_14 = sub_4a4084("SSL_CTX_set_default_passwd_cb", edx_13, ecx_13)
        data_52fc54 = eax_15
        int32_t* eax_16
        void* ecx_15
        int32_t edx_15
        eax_16, ecx_15, edx_15 = sub_4a4084("SSL_CTX_set_default_passwd_cb_userdata", edx_14, ecx_14)
        data_52fc58 = eax_16
        int32_t* eax_17
        void* ecx_16
        int32_t edx_16
        eax_17, ecx_16, edx_16 = sub_4a4084("SSL_CTX_check_private_key", edx_15, ecx_15)
        data_52fc5c = eax_17
        int32_t* eax_18
        void* ecx_17
        int32_t edx_17
        eax_18, ecx_17, edx_17 = sub_4a4084("SSL_new", edx_16, ecx_16)
        data_52fc60 = eax_18
        int32_t* eax_19
        void* ecx_18
        int32_t edx_18
        eax_19, ecx_18, edx_18 = sub_4a4084("SSL_free", edx_17, ecx_17)
        data_52fc64 = eax_19
        int32_t* eax_20
        void* ecx_19
        int32_t edx_19
        eax_20, ecx_19, edx_19 = sub_4a4084("SSL_accept", edx_18, ecx_18)
        data_52fc68 = eax_20
        int32_t* eax_21
        void* ecx_20
        int32_t edx_20
        eax_21, ecx_20, edx_20 = sub_4a4084("SSL_connect", edx_19, ecx_19)
        data_52fc6c = eax_21
        int32_t* eax_22
        void* ecx_21
        int32_t edx_21
        eax_22, ecx_21, edx_21 = sub_4a4084("SSL_read", edx_20, ecx_20)
        data_52fc70 = eax_22
        int32_t* eax_23
        void* ecx_22
        int32_t edx_22
        eax_23, ecx_22, edx_22 = sub_4a4084("SSL_peek", edx_21, ecx_21)
        data_52fc74 = eax_23
        int32_t* eax_24
        void* ecx_23
        int32_t edx_23
        eax_24, ecx_23, edx_23 = sub_4a4084("SSL_write", edx_22, ecx_22)
        data_52fc78 = eax_24
        int32_t* eax_25
        void* ecx_24
        int32_t edx_24
        eax_25, ecx_24, edx_24 = sub_4a4084("SSL_get_error", edx_23, ecx_23)
        data_52fc7c = eax_25
        int32_t* eax_26
        void* ecx_25
        int32_t edx_25
        eax_26, ecx_25, edx_25 = sub_4a4084("SSLv2_method", edx_24, ecx_24)
        data_52fc80 = eax_26
        int32_t* eax_27
        void* ecx_26
        int32_t edx_26
        eax_27, ecx_26, edx_26 = sub_4a4084("SSLv2_server_method", edx_25, ecx_25)
        data_52fc84 = eax_27
        int32_t* eax_28
        void* ecx_27
        int32_t edx_27
        eax_28, ecx_27, edx_27 = sub_4a4084("SSLv2_client_method", edx_26, ecx_26)
        data_52fc88 = eax_28
        int32_t* eax_29
        void* ecx_28
        int32_t edx_28
        eax_29, ecx_28, edx_28 = sub_4a4084("SSLv3_method", edx_27, ecx_27)
        data_52fc8c = eax_29
        int32_t* eax_30
        void* ecx_29
        int32_t edx_29
        eax_30, ecx_29, edx_29 = sub_4a4084("SSLv3_server_method", edx_28, ecx_28)
        data_52fc90 = eax_30
        int32_t* eax_31
        void* ecx_30
        int32_t edx_30
        eax_31, ecx_30, edx_30 = sub_4a4084("SSLv3_client_method", edx_29, ecx_29)
        data_52fc94 = eax_31
        int32_t* eax_32
        void* ecx_31
        int32_t edx_31
        eax_32, ecx_31, edx_31 = sub_4a4084("SSLv23_method", edx_30, ecx_30)
        data_52fc98 = eax_32
        int32_t* eax_33
        void* ecx_32
        int32_t edx_32
        eax_33, ecx_32, edx_32 = sub_4a4084("SSLv23_server_method", edx_31, ecx_31)
        data_52fc9c = eax_33
        int32_t* eax_34
        void* ecx_33
        int32_t edx_33
        eax_34, ecx_33, edx_33 = sub_4a4084("SSLv23_client_method", edx_32, ecx_32)
        data_52fca0 = eax_34
        int32_t* eax_35
        void* ecx_34
        int32_t edx_34
        eax_35, ecx_34, edx_34 = sub_4a4084("TLSv1_method", edx_33, ecx_33)
        data_52fca4 = eax_35
        int32_t* eax_36
        void* ecx_35
        int32_t edx_35
        eax_36, ecx_35, edx_35 = sub_4a4084("TLSv1_server_method", edx_34, ecx_34)
        data_52fca8 = eax_36
        int32_t* eax_37
        void* ecx_36
        int32_t edx_36
        eax_37, ecx_36, edx_36 = sub_4a4084("TLSv1_client_method", edx_35, ecx_35)
        data_52fcac = eax_37
        int32_t* eax_38
        void* ecx_37
        int32_t edx_37
        eax_38, ecx_37, edx_37 = sub_4a4084("SSL_shutdown", edx_36, ecx_36)
        data_52fcb0 = eax_38
        int32_t* eax_39
        void* ecx_38
        int32_t edx_38
        eax_39, ecx_38, edx_38 = sub_4a4084("SSL_set_connect_state", edx_37, ecx_37)
        data_52fcb4 = eax_39
        int32_t* eax_40
        void* ecx_39
        int32_t edx_39
        eax_40, ecx_39, edx_39 = sub_4a4084("SSL_set_accept_state", edx_38, ecx_38)
        data_52fcb8 = eax_40
        int32_t* eax_41
        void* ecx_40
        int32_t edx_40
        eax_41, ecx_40, edx_40 = sub_4a4084("SSL_set_shutdown", edx_39, ecx_39)
        data_52fcbc = eax_41
        int32_t* eax_42
        void* ecx_41
        int32_t edx_41
        eax_42, ecx_41, edx_41 = sub_4a4084("SSL_CTX_load_verify_locations", edx_40, ecx_40)
        data_52fcc0 = eax_42
        int32_t* eax_43
        void* ecx_42
        int32_t edx_42
        eax_43, ecx_42, edx_42 = sub_4a4084("SSL_get_session", edx_41, ecx_41)
        data_52fcc4 = eax_43
        data_52fcc8 = sub_4a4084("SSL_library_init", edx_42, ecx_42)
        data_52fccc = sub_4a40f4("SSL_CTX_set_info_callback_indy")
        data_52fcd0 = sub_4a40f4("X509_STORE_CTX_get_app_data_indy")
        data_52fcd4 = sub_4a40f4("SSL_SESSION_get_id_indy")
        data_52fcd8 = sub_4a40f4("SSL_SESSION_get_id_ctx_indy")
        data_52fcdc = sub_4a40f4("SSL_CTX_get_version_indy")
        int32_t* eax_50
        void* ecx_43
        int32_t edx_43
        eax_50, ecx_43, edx_43 = sub_4a40f4("SSL_CTX_set_options_indy")
        data_52fce0 = eax_50
        int32_t* eax_51
        void* ecx_44
        int32_t edx_44
        eax_51, ecx_44, edx_44 = sub_4a4140("X509_NAME_oneline", edx_43, ecx_43)
        data_52fce4 = eax_51
        int32_t* eax_52
        void* ecx_45
        int32_t edx_45
        eax_52, ecx_45, edx_45 = sub_4a4140("X509_NAME_hash", edx_44, ecx_44)
        data_52fce8 = eax_52
        int32_t* eax_53
        void* ecx_46
        int32_t edx_46
        eax_53, ecx_46, edx_46 = sub_4a4140("X509_set_issuer_name", edx_45, ecx_45)
        data_52fcec = eax_53
        int32_t* eax_54
        void* ecx_47
        int32_t edx_47
        eax_54, ecx_47, edx_47 = sub_4a4140("X509_get_issuer_name", edx_46, ecx_46)
        data_52fcf0 = eax_54
        int32_t* eax_55
        void* ecx_48
        int32_t edx_48
        eax_55, ecx_48, edx_48 = sub_4a4140("X509_set_subject_name", edx_47, ecx_47)
        data_52fcf4 = eax_55
        int32_t* eax_56
        void* ecx_49
        int32_t edx_49
        eax_56, ecx_49, edx_49 = sub_4a4140("X509_get_subject_name", edx_48, ecx_48)
        data_52fcf8 = eax_56
        int32_t* eax_57
        void* ecx_50
        int32_t edx_50
        eax_57, ecx_50, edx_50 = sub_4a4140("X509_digest", edx_49, ecx_49)
        data_52fcfc = eax_57
        data_52fd00 = sub_4a4140("EVP_md5", edx_50, ecx_50)
        data_52fd04 = sub_4a40f4("X509_get_notBefore_indy")
        int32_t* eax_60
        void* ecx_51
        int32_t edx_51
        eax_60, ecx_51, edx_51 = sub_4a40f4("X509_get_notAfter_indy")
        data_52fd08 = eax_60
        int32_t* eax_61
        void* ecx_52
        int32_t edx_52
        eax_61, ecx_52, edx_52 = sub_4a4140("X509_STORE_CTX_get_error", edx_51, ecx_51)
        data_52fd0c = eax_61
        int32_t* eax_62
        void* ecx_53
        int32_t edx_53
        eax_62, ecx_53, edx_53 = sub_4a4140("X509_STORE_CTX_set_error", edx_52, ecx_52)
        data_52fd10 = eax_62
        int32_t* eax_63
        void* ecx_54
        int32_t edx_54
        eax_63, ecx_54, edx_54 = sub_4a4140("X509_STORE_CTX_get_error_depth", edx_53, ecx_53)
        data_52fd14 = eax_63
        int32_t* eax_64
        void* ecx_55
        int32_t edx_55
        eax_64, ecx_55, edx_55 = sub_4a4140("X509_STORE_CTX_get_current_cert", edx_54, ecx_54)
        data_52fd18 = eax_64
        int32_t* eax_65
        void* ecx_56
        int32_t edx_56
        eax_65, ecx_56, edx_56 = sub_4a4140("RAND_screen", edx_55, ecx_55)
        data_52fd6c = eax_65
        int32_t* eax_66
        void* ecx_57
        int32_t edx_57
        eax_66, ecx_57, edx_57 = sub_4a4140("des_set_odd_parity", edx_56, ecx_56)
        data_52fd28 = eax_66
        int32_t* eax_67
        void* ecx_58
        int32_t edx_58
        eax_67, ecx_58, edx_58 = sub_4a4140("des_set_key", edx_57, ecx_57)
        data_52fd2c = eax_67
        int32_t* eax_68
        void* ecx_59
        int32_t edx_59
        eax_68, ecx_59, edx_59 = sub_4a4140("des_ecb_encrypt", edx_58, ecx_58)
        data_52fd30 = eax_68
        int32_t* eax_69
        void* ecx_60
        int32_t edx_60
        eax_69, ecx_60, edx_60 = sub_4a4084("SSL_set_ex_data", edx_59, ecx_59)
        data_52fd34 = eax_69
        int32_t* eax_70
        void* ecx_61
        int32_t edx_61
        eax_70, ecx_61, edx_61 = sub_4a4084("SSL_get_ex_data", edx_60, ecx_60)
        data_52fd38 = eax_70
        int32_t* eax_71
        void* ecx_62
        int32_t edx_62
        eax_71, ecx_62, edx_62 = sub_4a4084("SSL_load_client_CA_file", edx_61, ecx_61)
        data_52fd3c = eax_71
        int32_t* eax_72
        void* ecx_63
        int32_t edx_63
        eax_72, ecx_63, edx_63 = sub_4a4084("SSL_CTX_set_client_CA_list", edx_62, ecx_62)
        data_52fd40 = eax_72
        int32_t* eax_73
        void* ecx_64
        int32_t edx_64
        eax_73, ecx_64, edx_64 = sub_4a4084("SSL_CTX_set_default_verify_paths", edx_63, ecx_63)
        data_52fd44 = eax_73
        int32_t* eax_74
        void* ecx_65
        int32_t edx_65
        eax_74, ecx_65, edx_65 = sub_4a4084("SSL_CTX_set_session_id_context", edx_64, ecx_64)
        data_52fd48 = eax_74
        int32_t* eax_75
        void* ecx_66
        int32_t edx_66
        eax_75, ecx_66, edx_66 = sub_4a4084("SSL_CIPHER_description", edx_65, ecx_65)
        data_52fd4c = eax_75
        int32_t* eax_76
        void* ecx_67
        int32_t edx_67
        eax_76, ecx_67, edx_67 = sub_4a4084("SSL_get_current_cipher", edx_66, ecx_66)
        data_52fd50 = eax_76
        int32_t* eax_77
        void* ecx_68
        int32_t edx_68
        eax_77, ecx_68, edx_68 = sub_4a4084("SSL_CIPHER_get_name", edx_67, ecx_67)
        data_52fd54 = eax_77
        int32_t* eax_78
        void* ecx_69
        int32_t edx_69
        eax_78, ecx_69, edx_69 = sub_4a4084("SSL_CIPHER_get_version", edx_68, ecx_68)
        data_52fd58 = eax_78
        int32_t* eax_79
        void* ecx_70
        int32_t edx_70
        eax_79, ecx_70, edx_70 = sub_4a4084("SSL_CIPHER_get_bits", edx_69, ecx_69)
        data_52fd5c = eax_79
        int32_t* eax_80
        void* ecx_71
        int32_t edx_71
        eax_80, ecx_71, edx_71 = sub_4a4140("CRYPTO_num_locks", edx_70, ecx_70)
        data_52fd1c = eax_80
        int32_t* eax_81
        void* ecx_72
        int32_t edx_72
        eax_81, ecx_72, edx_72 = sub_4a4140("CRYPTO_set_locking_callback", edx_71, ecx_71)
        data_52fd20 = eax_81
        data_52fd24 = sub_4a4140("CRYPTO_set_id_callback", edx_72, ecx_72)
        
        if (data_52fc24 == 0 || data_52fc28 == 0 || data_52fc2c == 0 || data_52fc30 == 0
                || data_52fc34 == 0 || data_52fc38 == 0 || data_52fc3c == 0 || data_52fc40 == 0
                || data_52fc44 == 0 || data_52fc48 == 0 || data_52fc54 == 0 || data_52fc58 == 0
                || data_52fc5c == 0 || data_52fc60 == 0 || data_52fc64 == 0 || data_52fc68 == 0
                || data_52fc6c == 0 || data_52fc70 == 0 || data_52fc74 == 0 || data_52fc78 == 0
                || data_52fc7c == 0 || data_52fc80 == 0 || data_52fc84 == 0 || data_52fc88 == 0
                || data_52fc8c == 0 || data_52fc90 == 0 || data_52fc94 == 0 || data_52fc98 == 0
                || data_52fc9c == 0 || data_52fca0 == 0 || data_52fca4 == 0 || data_52fca8 == 0
                || data_52fcac == 0 || data_52fcb0 == 0 || data_52fcb4 == 0 || data_52fcb8 == 0
                || data_52fcbc == 0 || data_52fcc0 == 0 || data_52fcc4 == 0 || data_52fcc8 == 0
                || data_52fccc == 0 || data_52fcd0 == 0 || data_52fcd4 == 0 || data_52fcd8 == 0
                || data_52fcdc == 0 || data_52fce0 == 0 || data_52fce4 == 0 || data_52fcec == 0
                || data_52fcf0 == 0 || data_52fcf4 == 0 || data_52fcf8 == 0 || data_52fd04 == 0
                || data_52fd08 == 0 || data_52fd0c == 0 || data_52fd10 == 0 || data_52fd14 == 0
                || data_52fd18 == 0 || data_52fd28 == 0 || data_52fd2c == 0 || data_52fd30 == 0
                || data_52fd34 == 0 || data_52fd38 == 0 || data_52fc4c == 0 || data_52fc50 == 0
                || data_52fd3c == 0 || data_52fd40 == 0 || data_52fd44 == 0 || data_52fd48 == 0
                || data_52fd4c == 0 || data_52fd50 == 0 || data_52fd54 == 0 || data_52fd5c == 0
                || data_52fd58 == 0 || data_52fd1c == 0 || data_52fd20 == 0 || data_52fd24 == 0)
            return 0
        
        result.b = 1
    
    return result
}
