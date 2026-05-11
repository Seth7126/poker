// ============================================================
// 函数名称: sub_437784
// 虚拟地址: 0x437784
// WARP GUID: 6c3fc65a-de19-545d-813f-3eaf0fbbcdad
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_437154
// [被调用的父级函数]: sub_43ab7c, sub_43a2fc
// ============================================================

int32_t __thiscallsub_437784(int32_t arg1, int32_t* arg2 @ eax, char arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: char result = sub_437154(arg2)
    char result = sub_437154(arg2)
    
    if (result == 0)
        return result
    
    int32_t eax_2
    eax_2.b = arg2[0xd].b
    int32_t edx_1
    edx_1.b = *(arg2 + 0x37)
    int32_t eax_4
    eax_4.b = arg3
    return (*(*arg2 + 0x30))(eax_4, *((eax_2 << 2) + &data_52e874) | *((edx_1 << 2) + &data_52e884), 
        arg5, arg1)
}
