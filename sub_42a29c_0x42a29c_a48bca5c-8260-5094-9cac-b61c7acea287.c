// ============================================================
// 函数名称: sub_42a29c
// 虚拟地址: 0x42a29c
// WARP GUID: a48bca5c-8260-5094-9cac-b61c7acea287
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410948, sub_42a4d8, sub_4038c8, sub_4108e4, sub_410524, sub_4199dc
// [被调用的父级函数]: sub_42a430
// ============================================================

int32_tsub_42a29c()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    void* eax_1 = sub_4108e4(data_531790)
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_4 = *(eax_1 + 8) - 1
    
    if (eax_4 s>= 0)
        int32_t var_10_1 = eax_4 + 1
        int32_t var_8_1 = 0
        int32_t i
        
        do
            ebp_1[-4] = sub_410524(ebp_1[-2], ebp_1[-1])
            char eax_9
            eax_9, ebp_1 = sub_4199dc(ebp_1[-4])
            esp_1 = &esp_1[6]
            
            if (eax_9 != 0)
                *(esp_1 - 4) = ebp_1
                *(esp_1 - 8) = j_sub_4037f0
                *(esp_1 - 0xc) = fsbase->NtTib.ExceptionList
                fsbase->NtTib.ExceptionList = esp_1 - 0xc
                sub_42a4d8(ebp_1[-4])
                sub_4038c8()
                int32_t result = sub_4038c8()
                *ebp_1
                return result
            
            ebp_1[-1] += 1
            i = ebp_1[-3]
            ebp_1[-3] -= 1
        while (i != 1)
    
    esp_1[2]
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1[2] = 0x42a353
    return sub_410948(data_531790)
}
