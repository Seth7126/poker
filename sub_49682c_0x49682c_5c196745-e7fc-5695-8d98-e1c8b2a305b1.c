// ============================================================
// 函数名称: sub_49682c
// 虚拟地址: 0x49682c
// WARP GUID: 5c196745-e7fc-5695-8d98-e1c8b2a305b1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: getsockopt, accept, setsockopt
// [内部子函数调用]: sub_4032ac, sub_4960d8
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_49682c(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = 4
    int32_t* var_2c = &var_8
    int32_t var_c
    int32_t* var_30 = &var_c
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = 0x7008
    int32_t result
    int32_t ecx
    result, ecx = getsockopt(0xffffffff, 0xffff, ExceptionList, var_30, var_2c)
    
    if (result != 0)
        return result
    
    int32_t* var_2c_1 = &var_4
    int32_t (* var_30_1)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_10
    
    if (arg1[0x16].b == 1)
        var_10 = 0x20
        setsockopt(ecx, 0xffffffff, 0xffff, 0x7008, &var_10, var_8)
    
    var_8 = 0x10
    void var_20
    int32_t eax_1 = accept(arg2, &var_20, &var_8)
    
    if (eax_1 != 0xffffffff)
        int32_t ebx
        ebx.w = 0xfffb
        void* eax_3
        int32_t edx_1
        eax_3, edx_1 = sub_4032ac(arg1, eax_1)
        
        if (*(arg1 + 0x32) != 0)
            var_c = 5
            arg1[0xd]
            arg1[0xc](var_c)
        
        if (arg1[0x16].b == 1)
            edx_1.b = 0
            sub_4960d8(eax_3, edx_1)
            void* ebx_1
            ebx_1.w = 0xfffa
            sub_4032ac(arg1, eax_3)
    
    void* const __return_addr_1 = __return_addr
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = &data_496925
    var_8 = 4
    var_4 = var_8
    var_8 = &var_c
    var_c = 0x7008
    var_10 = 0xffff
    return setsockopt(__return_addr_1, 0xffffffff, var_10, var_c, var_8, var_4)
}
