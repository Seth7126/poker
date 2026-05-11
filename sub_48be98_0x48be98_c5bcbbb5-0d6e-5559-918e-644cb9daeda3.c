// ============================================================
// 函数名称: sub_48be98
// 虚拟地址: 0x48be98
// WARP GUID: c5bcbbb5-0d6e-5559-918e-644cb9daeda3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_403008, sub_40422c, sub_409040, sub_4040c4, sub_404078, sub_52c7c8, sub_4030d0, sub_403e1c, sub_404280, sub_403010
// [被调用的父级函数]: sub_4807f4, sub_4d9a28, sub_4d6cdc, sub_4dc3b8, sub_48bd6c
// ============================================================

int32_t __convention("regparm")sub_48be98(void* arg1, void* arg2, int32_t arg3, char arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = 0
    int32_t var_c = 0
    char* var_10 = nullptr
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    int32_t edi
    int32_t var_1c = edi
    char ebx_1 = arg4
    sub_40422c(arg2)
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (GetTickCount() s< 0)
        sub_403008()
        noreturn
    
    int32_t temp0 = *(arg1 + 0x8ac)
    *(arg1 + 0x8ac) += 1
    
    if (add_overflow(temp0, 1))
        sub_403010()
        noreturn
    
    int32_t eax_3 = sub_404078(arg2)
    
    if (add_overflow(eax_3, 0xfffffffc))
        sub_403010()
        noreturn
    
    sub_404280(eax_3 - 4, 1, arg2, &var_10)
    sub_4040c4(&var_c, var_10, "a.bmp")
    char eax_7
    int32_t edx_1
    eax_7, edx_1 = sub_409040(var_c)
    
    if (eax_7 != 0)
        ebx_1 = 1
    
    void* ebp_1
    char** edi_2
    
    if (ebx_1 == 0)
        if (arg3 != 0)
            void* var_2c_4 = arg2
            edx_1.b = 1
            char** eax_15
            eax_15, ebp_1 = sub_52c7c8(0x52c738, edx_1, arg3, arg1, arg3, 0)
            edi_2 = eax_15
        else
            void* var_2c_3 = arg2
            edx_1.b = 1
            char** eax_13
            eax_13, ebp_1 = sub_52c7c8(0x52c738, edx_1, *(arg1 + 0x8ac), arg1, arg3, 0)
            edi_2 = eax_13
    else if (arg3 != 0)
        void* var_2c_2 = arg2
        edx_1.b = 1
        char** eax_11
        eax_11, ebp_1 = sub_52c7c8(0x52c738, edx_1, arg3, arg1, arg3, 1)
        edi_2 = eax_11
    else
        void* var_2c_1 = arg2
        edx_1.b = 1
        char** eax_9
        eax_9, ebp_1 = sub_52c7c8(0x52c738, edx_1, *(arg1 + 0x8ac), arg1, arg3, 1)
        edi_2 = eax_9
    
    int32_t eax_16 = edi_2[1]
    
    if (eax_16 s< 0)
        sub_403008()
        noreturn
    
    (*data_53036c)(0xde1, eax_16)
    var_c = 0x2100
    var_10 = 0x2200
    (*data_5304ac)(0x2300, var_10, var_c)
    var_c = 0x2901
    var_10 = 0x2802
    (*data_52ff8c)(0xde1, var_10, var_c)
    var_c = 0x2901
    var_10 = 0x2803
    (*data_52ff8c)(0xde1, var_10, var_c)
    var_c = *(arg1 + 0x9c0)
    var_10 = 0x2800
    (*data_52ff8c)(0xde1, var_10, var_c)
    var_c = *(arg1 + 0x9c0)
    var_10 = 0x2801
    (*data_52ff8c)(0xde1, var_10, var_c)
    
    if (ebx_1 == 0)
        var_c = edi_2[4]
        var_10 = 0x1401
        (*data_5307c4)(0xde1, 3, edi_2[2], edi_2[3], 0x1907, var_10, var_c)
    else
        var_c = edi_2[5]
        var_10 = 0x1401
        (*data_5307c4)(0xde1, 4, edi_2[2], edi_2[3], 0x1908, var_10, var_c)
    
    sub_4030d0(edi_2)
    *(arg1 + 0x8ac)
    fsbase->NtTib.ExceptionList = arg2
    __return_addr = sub_48c0ad
    return sub_403e1c(ebp_1 - 0xc, 3)
}
