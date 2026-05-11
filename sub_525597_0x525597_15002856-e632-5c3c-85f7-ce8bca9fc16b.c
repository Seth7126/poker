// ============================================================
// 函数名称: sub_525597
// 虚拟地址: 0x525597
// WARP GUID: 15002856-e632-5c3c-85f7-ce8bca9fc16b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_527aa4, sub_4c95c4
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_525597(char* arg1, int16_t arg2, int32_t* arg3, void* arg4 @ ebp, char* arg5 @ esi)
{
    // 第一条实际指令: *arg3 += 1
    *arg3 += 1
    *arg1 += arg1.b
    *arg5 += arg3:1.b
    *arg1 += arg1.b
    *(arg4 - 0x75) += arg2.b
    int32_t eflags
    arg1.b = __in_al_dx(arg2, eflags)
    *data_5301f4
    void* result = sub_527aa4()
    
    if (arg1[4] != 7)
        return result
    
    return sub_4c95c4()
}
