// ============================================================
// 函数名称: sub_42cb24
// 虚拟地址: 0x42cb24
// WARP GUID: 508ea99f-175b-57c4-a0ca-ae89aacfc501
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_440d94
// [被调用的父级函数]: sub_42cd0f, sub_42cb68, sub_42cd39, sub_42cce9, sub_42cbd0, sub_42ccc4
// ============================================================

void __fastcallsub_42cb24(int32_t arg1, void* arg2, int32_t* arg3 @ eax, char arg4)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    var_8:3.b = arg1.b
    
    if ((*(arg3 + 0x41) & 0x10) != 0)
        return 
    
    int32_t eax = sx.d(*(arg2 + 8))
    int32_t var_1c_1 = sx.d(*(arg2 + 0xa))
    int32_t eax_1
    eax_1.w = *(arg2 + 4)
    char eax_2
    int32_t edx
    eax_2, edx = sub_440d94(eax_1.w)
    edx.b = var_8:3.b
    int32_t ebx
    ebx.w = 0xffda
    sub_4032ac(arg3, edx, eax_2 | arg4, var_1c_1, eax)
}
