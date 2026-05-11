// ============================================================
// 函数名称: sub_406ad4
// 虚拟地址: 0x406ad4
// WARP GUID: 218f1817-c449-583d-901e-0d819f80e2a3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetCurrentThreadId, GetCommandLineA
// [内部子函数调用]: sub_402f38, sub_4013d0, sub_402f08, sub_402ffc, sub_405e46
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_406ad4()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* var_8 = &__saved_ebp
    int32_t (* var_c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t temp1 = data_53142c
    data_53142c -= 1
    
    if (temp1 u< 1)
        data_531038 = 0
        data_531040 = 0
        data_531044 = 0
        data_53104a = 2
        data_53104b = 2
        data_53104c = 3
        data_5313f4 = 0
        data_531404 = 1
        data_531414 = 0xa
        data_53141c = 0x80020004
        data_5313e8 = 0x404ce4
        data_5313ec = sub_404cdc
        data_5313f0 = 0x404ce4
        
        if (sub_402f08() != 0)
            sub_402f38()
        
        sub_402ffc()
        sub_405e46(&data_531050, 0x406bc8)
        sub_405e46(0x53121c, 0x406bc8)
        data_531030 = GetCommandLineA()
        data_53102c = sub_4013d0()
        data_531024 = GetCurrentThreadId()
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
