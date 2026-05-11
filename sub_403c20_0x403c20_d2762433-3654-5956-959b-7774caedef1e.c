// ============================================================
// 函数名称: sub_403c20
// 虚拟地址: 0x403c20
// WARP GUID: d2762433-3654-5956-959b-7774caedef1e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4012b8, sub_403a70, sub_4012d8, sub_4012c0, sub_403a48, sub_405a78, sub_403bec, j_sub_4064e4, sub_406463, sub_403b9c
// [被调用的父级函数]: sub_52de46, sub_403d40, _start
// ============================================================

voidsub_403c20() __noreturn
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    int32_t esi
    int32_t var_8 = esi
    int32_t edi
    int32_t var_c = edi
    int32_t ebp
    int32_t var_10 = ebp
    int32_t* esp_1 = &var_10
    int32_t* esi_1 = &data_531038
    
    if (data_5314c8 == 0 && data_53103c != 0)
        do
            int32_t edx_1 = data_53103c
            data_53103c = 0
            edx_1()
        while (data_53103c != 0)
    
    if (data_531040 != 0)
        sub_403b9c()
        
        if (data_531048 != 0)
            j_sub_4064e4()
            sub_406463()
        else if (data_52e010 == 0)
            int32_t var_14_1 = 0
            char* var_18_1 = "Error"
            char* var_1c_1 = "Runtime error     at 00000000"
            int32_t var_20_1 = 0
            sub_4012c0(0, "Runtime error     at 00000000", "Error", 0)
            esp_1 = &var_10
        
        data_531040 = 0
    
    while (true)
        if (data_5314c8 == 2 && *esi_1 == 0)
            data_5314b0 = 0
        
        sub_403a70()
        
        if (data_5314c8 u<= 1 || *esi_1 != 0)
            int32_t* eax_3 = data_5314b4
            
            if (eax_3 != 0)
                sub_405a78(eax_3)
                void* eax_4 = data_5314b4
                int32_t edx_3 = *(eax_4 + 0x10)
                
                if (edx_3 != *(eax_4 + 4))
                    *(esp_1 - 4) = edx_3
                    sub_4012d8()
        
        sub_403a48()
        
        if (data_5314c8 == 1)
            data_5314cc()
        
        if (data_5314c8 != 0)
            sub_403bec()
            esp_1 = &esp_1[3]
        
        if (data_5314a4 == 0)
            break
        
        int32_t eax_6 = data_5314a4
        *(esp_1 - 4) = esi_1
        __builtin_memcpy(&data_5314a4, eax_6, 0x2c)
        esi_1 = *(esp_1 - 4)
    
    *(esp_1 - 4) = *esi_1
    sub_4012b8()
    noreturn
}
