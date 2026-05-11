// ============================================================
// 函数名称: sub_4460d0
// 虚拟地址: 0x4460d0
// WARP GUID: 02ec4ee2-349f-54e4-9f0b-144bdc95075a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_418718, sub_4030d0
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_4460d0(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    
    if (*(arg1 + 0x49) == 0)
        return 
    
    if (*(arg2 + 4) == 0)
        arg2.b = 1
        int32_t* eax_1 = sub_418718(sub_416e58+0x3d4, arg2)
        int32_t* var_10 = &var_4
        int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
        TEB* fsbase
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        (*(**(arg1 + 0x58) + 8))(ExceptionList, var_14, var_10)
        fsbase->NtTib.ExceptionList = eax_1
        __return_addr = &data_446135
        sub_4030d0(eax_1)
        return 
    
    *(arg2 + 8)
    (*(**(arg1 + 0x58) + 8))()
}
