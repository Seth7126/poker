// ============================================================
// 函数名称: sub_4a951c
// 虚拟地址: 0x4a951c
// WARP GUID: 5d46c368-5f22-55eb-894e-276be6c24276
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4a3b04
// [被调用的父级函数]: sub_4a9504, sub_4a90cc
// ============================================================

int32_t __convention("regparm")sub_4a951c(int32_t* arg1, char arg2)
{
    // 第一条实际指令: char result = (*(*arg1 + 0x48))()
    char result = (*(*arg1 + 0x48))()
    
    if (result == 0)
        return result
    
    int32_t eax_1
    eax_1.b = arg2
    return sub_4a3b04(1, arg1[0x1a], 4, (eax_1 << 2) + &data_52fd70)
}
