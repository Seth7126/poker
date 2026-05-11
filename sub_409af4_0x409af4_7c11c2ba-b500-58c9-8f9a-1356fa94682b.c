// ============================================================
// 函数名称: sub_409af4
// 虚拟地址: 0x409af4
// WARP GUID: 7c11c2ba-b500-58c9-8f9a-1356fa94682b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404078, sub_4043ac, sub_403ee0, sub_403df8, sub_409680
// [被调用的父级函数]: sub_408e1c, sub_408e4c, sub_409ae0, sub_4b5a84
// ============================================================

void* __fastcallsub_409af4(int32_t arg1, char* arg2, void* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: void* var_1004 = arg3
    void* var_1004 = arg3
    void* i_1 = 0x1002
    char var_100e
    void* i
    int32_t edi
    
    if (sub_404078(arg2) s>= 0x1002 - (0x1002 s>> 2))
        i_1 = sub_404078(arg2)
        i = i_1
    else
        int32_t var_101c_1 = sub_404078(arg2)
        int32_t var_1020_1 = arg1
        i = sub_409680(arg2, 0x1001, &var_100e, arg3, edi, arg4)
    
    if (i s< i_1 - 1)
        sub_403ee0(arg3, &var_100e, i)
        return arg3
    
    for (; i s>= i_1 - 1; i = sub_409680(arg2, i_1 - 1, *arg3, arg3, edi, arg4))
        i_1 *= 2
        sub_403df8(arg3)
        sub_4043ac(arg3, i_1)
        int32_t var_101c_2 = sub_404078(arg2)
        int32_t var_1020_2 = arg1
    
    return sub_4043ac(arg3, i)
}
