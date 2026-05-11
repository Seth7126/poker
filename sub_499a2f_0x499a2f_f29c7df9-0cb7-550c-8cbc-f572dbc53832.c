// ============================================================
// 函数名称: sub_499a2f
// 虚拟地址: 0x499a2f
// WARP GUID: f29c7df9-0cb7-550c-8cbc-f572dbc53832
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: FreeLibrary, InterlockedExchange
// [内部子函数调用]: sub_49a8a4
// [被调用的父级函数]: 无
// ============================================================

void** __convention("regparm")sub_499a2f(char* arg1, int32_t* arg2, void* arg3 @ ebp)
{
    // 第一条实际指令: *arg2 += 1
    *arg2 += 1
    *arg1 += arg1.b
    int16_t entry_ebx
    *arg2 += entry_ebx:1.b
    *arg1 &= arg1.b
    *(arg3 - 0x75) += arg2.b
    int32_t eflags
    arg1.b = __in_al_dx(arg2.w, eflags)
    void** hLibModule = InterlockedExchange(&data_52f600)
    
    if (hLibModule == 0)
        return hLibModule
    
    FreeLibrary(hLibModule)
    return sub_49a8a4()
}
