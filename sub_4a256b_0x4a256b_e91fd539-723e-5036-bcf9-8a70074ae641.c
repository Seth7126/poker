// ============================================================
// 函数名称: sub_4a256b
// 虚拟地址: 0x4a256b
// WARP GUID: e91fd539-723e-5036-bcf9-8a70074ae641
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4a1a28, sub_403e4c, sub_403248, sub_403260
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4a256b(char* arg1, int32_t* arg2, int32_t* arg3, void* arg4 @ ebp)
{
    // 第一条实际指令: *arg3 += 1
    *arg3 += 1
    *arg1 += arg1.b
    *arg1 += arg1:1.b
    *arg1 += arg1.b
    *(arg4 - 0x75) += arg2.b
    int32_t eflags
    arg1.b = __in_al_dx(arg2.w, eflags)
    
    if (sub_403248(arg2, sub_4a130e+0x246) == 0)
        return sub_4a1a28(arg1, arg2)
    
    sub_403260(arg2, sub_4a130e+0x246)
    sub_403e4c(&arg2[0x14], *(arg1 + 0x50))
    sub_403e4c(&arg2[0x15], *(arg1 + 0x54))
    sub_403e4c(&arg2[0x16], *(arg1 + 0x58))
    sub_403e4c(&arg2[0x17], *(arg1 + 0x5c))
    sub_403e4c(&arg2[0x19], *(arg1 + 0x64))
    sub_403e4c(&arg2[0x1a], *(arg1 + 0x68))
    sub_403e4c(&arg2[0x1b], *(arg1 + 0x6c))
    sub_403e4c(&arg2[0x1c], *(arg1 + 0x70))
    sub_403e4c(&arg2[0x1d], *(arg1 + 0x74))
    char result = arg1[0x7c]
    arg2[0x1f].b = result
    return result
}
