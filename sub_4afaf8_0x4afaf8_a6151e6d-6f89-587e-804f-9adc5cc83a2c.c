// ============================================================
// 函数名称: sub_4afaf8
// 虚拟地址: 0x4afaf8
// WARP GUID: a6151e6d-6f89-587e-804f-9adc5cc83a2c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40c024, sub_49f520, sub_4afa30, sub_4a7cd8, sub_405ae8, sub_40892c, sub_4a3488, sub_403e1c
// [被调用的父级函数]: sub_4b19b0, sub_4b0427, sub_4b17c4, sub_4b18e4
// ============================================================

int32_t __convention("regparm")sub_4afaf8(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t var_24
    __builtin_memset(&var_24, 0, 0x20)
    int32_t ebx
    int32_t var_28 = ebx
    int32_t esi
    int32_t var_2c = esi
    int32_t edi
    int32_t var_30 = edi
    int32_t* var_8 = arg1
    int32_t* var_34 = &var_4
    int32_t (* var_38)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    void** esp = &ExceptionList_1
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    int32_t* eax = *(arg2 + 0x78)
    
    if (eax != 0)
        int32_t edx = *(arg2 + 0x18)
        int32_t* var_40
        
        if (edx s<= 0)
            sub_49f520(*(arg2 + 8), "Transfer-Encoding")
            void* var_10
            int32_t* var_c
            sub_40892c(var_10, &var_c)
            
            if (sub_40c024("chunked", var_c) s> 0)
                var_40 = nullptr
                char* var_1c
                sub_405ae8(data_530008, &var_1c)
                char* var_18 = var_1c
                int32_t var_14
                var_14.b = 0xb
                int32_t edx_5
                edx_5.b = 5
                void* ebx_2
                int32_t* ebp_2
                ebx_2, ebp_2 = sub_4a3488(var_8, edx_5, &var_18, var_40)
                var_c = ebp_2
                int32_t i
                i, ebp_1 = sub_4afa30(var_c)
                
                while (i s> 0)
                    var_c = nullptr
                    sub_4a7cd8(ebp_1[-1], *(ebx_2 + 0x78), i, var_c.b)
                    (*(*ebp_1[-1] + 0x70))(&ebp_1[-7], 0xffffffff)
                    var_c = ebp_1
                    i, ebp_1 = sub_4afa30(var_c)
                
                var_c = 0xffffffff
                (*(*ebp_1[-1] + 0x70))(&ebp_1[-8], var_c)
                esp = &var_8
            else if (*(arg2 + 0x4c) == 0)
                var_40 = 1
                esp = &var_40
                sub_4a7cd8(var_8, *(arg2 + 0x78), 0xffffffff, var_40.b)
        else
            var_40 = &var_4
            int32_t (* var_44_1)() = j_sub_403668
            struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = &ExceptionList
            sub_4a7cd8(var_8, eax, edx, 0)
            esp = &var_40
            fsbase->NtTib.ExceptionList = 0
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4afc5b
    sub_403e1c(&ebp_1[-8], 3)
    return sub_403e1c(&ebp_1[-3], 2)
}
