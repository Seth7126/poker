// ============================================================
// 函数名称: sub_4399ac
// 虚拟地址: 0x4399ac
// WARP GUID: 38d8f32f-f29e-53ee-8d56-bca4b0170c29
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43b9bc
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4399ac(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: char result = (*(*arg1 + 0x34))()
    char result = (*(*arg1 + 0x34))()
    
    if (result == 0)
        return result
    
    return sub_43b9bc(arg1[6], arg2)
}
