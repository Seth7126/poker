// ============================================================
// 函数名称: sub_41bec0
// 虚拟地址: 0x41bec0
// WARP GUID: eb1e7ce4-4788-515c-aa0d-ea57f1c93359
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40301c, sub_402bdc
// [被调用的父级函数]: sub_41bf98
// ============================================================

int32_t* __convention("regparm")sub_41bec0(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void** edi = *(arg1 + 4)
    void** edi = *(arg1 + 4)
    char var_14c
    
    if (edi == 0)
        var_14c = 0
    else
        char var_10c[0x100]
        sub_40301c(*edi, &var_10c)
        sub_402bdc(&var_14c, &var_10c, 0x3f)
    
    int32_t ecx_2
    ecx_2.b = var_14c
    (*(*arg2 + 8))()
    int32_t* result = *(arg1 + 4)
    
    if (result == 0)
        return result
    
    return (*(*result + 0x44))()
}
