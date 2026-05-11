// ============================================================
// 函数名称: sub_446244
// 虚拟地址: 0x446244
// WARP GUID: 1224f806-7806-5be6-8c58-c49212b4f364
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_446388
// [被调用的父级函数]: sub_4463a4
// ============================================================

int32_t __convention("regparm")sub_446244(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* var_1c = &__saved_ebp
    int32_t (* var_20)() = j_sub_40353c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char var_9 = 0
    
    if ((*(*arg1 + 0xd0))(ExceptionList, var_20, var_1c).b != 0)
        var_9 = 1
        
        if (*(arg1 + 0x27a) != 0)
            arg1[0x9f]
            arg1[0x9e]()
    
    int32_t* eax_1
    eax_1.b = var_9
    char temp0 = eax_1.b
    eax_1.b -= 1
    
    if (temp0 u< 1)
        arg1[0x8d] = 0
    else
        char temp1_1 = eax_1.b
        eax_1.b -= 1
        
        if (temp1_1 == 1)
            sub_446388(arg1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
