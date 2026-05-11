// ============================================================
// 函数名称: sub_431e68
// 虚拟地址: 0x431e68
// WARP GUID: 62c34082-dc64-5f7e-9222-9e8f72e93653
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42b9cc, sub_403248, sub_4315b8
// [被调用的父级函数]: sub_4430c0
// ============================================================

BOOL __fastcallsub_431e68(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (sub_403248(arg2, 0x427f2c) != 0)
    if (sub_403248(arg2, 0x427f2c) != 0)
        return sub_4315b8(arg2, arg1)
    
    char result = sub_403248(arg2, &data_4279b4)
    
    if (result == 0)
        return result
    
    return sub_42b9cc(arg2, arg1)
}
