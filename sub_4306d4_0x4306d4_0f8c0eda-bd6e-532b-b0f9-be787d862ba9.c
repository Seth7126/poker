// ============================================================
// 函数名称: sub_4306d4
// 虚拟地址: 0x4306d4
// WARP GUID: 0f8c0eda-bd6e-532b-b0f9-be787d862ba9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43064c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4306d4(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: char result = sub_43064c(arg1, arg2)
    char result = sub_43064c(arg1, arg2)
    
    if (result != 0)
        return result
    
    return (*(*arg1 - 0x10))()
}
