// ============================================================
// 函数名称: sub_511e1c
// 虚拟地址: 0x511e1c
// WARP GUID: 83a58758-af40-52e9-8a52-497b1495fe76
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_512f3c, sub_510e64, sub_513ae4, sub_509ed4, sub_513ffc, sub_408e80, sub_514e80, sub_403e1c, sub_514cc4, sub_516544, sub_513e4c, sub_403010
// [被调用的父级函数]: sub_511fd8
// ============================================================

int32_t __convention("regparm")sub_511e1c(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t var_8 = 0
    void* var_c = nullptr
    char* var_10 = nullptr
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    int32_t edi
    int32_t var_1c = edi
    void* ebx_1 = arg1
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *(ebx_1 + 0x54)
    
    if (arg2 == 2)
        *(ebx_1 + 0x345) = 0
        struct _EXCEPTION_REGISTRATION_RECORD* var_2c = 1
        esp = &var_2c
        sub_512f3c(ebx_1, 0, &var_c)
        
        if (sub_516544(ebx_1, 0, var_c, var_2c.b) == 0)
            int32_t ecx_4 = sub_514cc4(ebx_1, "client to ERSATZ connecten fehlgeschlagen")
            
            if (*(ebx_1 + 0x54) != 1)
                sub_513ae4(ecx_4, 6)
            else
                sub_513ae4(ecx_4, 6)
        else
            sub_514cc4(ebx_1, "client to ERSATZ connecten erfolgreich")
            sub_512f3c(ebx_1, 1, &var_10)
            int32_t edx_1 = sub_408e80(var_10) * 0xe9
            bool o_1 = unimplemented  {imul edx, eax, 0xe9}
            
            if (o_1)
                sub_403010()
                noreturn
            
            *(ebx_1 + (edx_1 << 2) - 0x50) = 2
            *(ebx_1 + (edx_1 << 2) + 0x185) = 0
            void* ebx_2
            ebx_2, ebp_1 = sub_510e64(ebx_1)
            sub_513e4c(ebx_2, 0)
        
        *(ebp_1 - 1) = 0
    else if (arg2 == 1)
        var_8:3.b = 0
        *(ebx_1 + 0x1a0) = 0
        int32_t i_1 = *(ebx_1 + 0x348)
        
        if (i_1 s> 0)
            int32_t esi_1 = 1
            int32_t i
            
            do
                bool o_2 = unimplemented  {imul eax, esi, 0xe9}
                
                if (o_2)
                    sub_403010()
                    noreturn
                
                if (*(ebx_1 + esi_1 * 0x3a4 - 0x50) == 4)
                    if (*(ebx_1 + 0x54) == 2)
                        sub_513ffc(ebx_1)
                        sub_509ed4(esi_1)
                    
                    ebx_1, ebp_1 = sub_510e64(ebx_1)
                
                esi_1 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        sub_514e80(ebx_1, ebx_1 + 0x3640)
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_511f69
    return sub_403e1c(&ebp_1[-3], 2)
}
