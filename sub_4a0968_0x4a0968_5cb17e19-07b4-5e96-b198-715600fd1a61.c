// ============================================================
// 函数名称: sub_4a0968
// 虚拟地址: 0x4a0968
// WARP GUID: 5cb17e19-07b4-5e96-b198-715600fd1a61
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_40422c, sub_4030a0, sub_405ae8, sub_403df8, sub_403e1c, sub_40301c, sub_40b4b0, sub_409ae0
// [被调用的父级函数]: sub_4a102c
// ============================================================

int32_t __convention("regparm")sub_4a0968(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_11c = ebx
    int32_t* var_c = nullptr
    char* var_118 = nullptr
    sub_40422c(arg1)
    int32_t* var_120 = &var_4
    int32_t (* var_124)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_52fbf4 == 0)
        int32_t edx
        edx.b = 1
        data_52fbf4 = sub_4030a0(0, edx)
    
    int32_t eax_4
    int32_t ecx_1
    int32_t edx_2
    eax_4, edx_2, ecx_1 = (*(*data_52fbf4 + 0x50))()
    
    if (eax_4 s< 0)
        edx_2.b = 1
        *(sub_4030a0(ecx_1, edx_2) + 4) = arg2
        (*(*data_52fbf4 + 0x38))(arg1)
        fsbase->NtTib.ExceptionList = arg1
        __return_addr = sub_4a0a7e
        sub_403df8(&var_118)
        return sub_403e1c(&var_c, 2)
    
    var_c = &var_c
    (*(*data_52fbf4 + 0x50))(var_c, arg1)
    void var_114
    sub_40301c(*((*(*data_52fbf4 + 0x18))() + 4), &var_114)
    void* var_14 = &var_114
    char var_10 = 4
    var_10.d = &var_14
    sub_405ae8(data_5303f0, &var_118)
    sub_409ae0(0, var_10.d, var_118)
    int32_t edx_9
    edx_9.b = 1
    sub_40b4b0(&data_4a08e0, edx_9, var_c)
    sub_403828()
    noreturn
}
