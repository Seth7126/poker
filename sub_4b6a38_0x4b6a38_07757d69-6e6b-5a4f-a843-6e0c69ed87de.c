// ============================================================
// 函数名称: sub_4b6a38
// 虚拟地址: 0x4b6a38
// WARP GUID: 07757d69-6e6b-5a4f-a843-6e0c69ed87de
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4b6a38(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_4 = arg3
    int32_t var_4 = arg3
    int32_t result = 0
    
    if (*(arg1 + 0x20) != 0)
        int32_t* eax = *(arg1 + 0x20)
        (*(*eax + 0x40))(eax, &var_4)
        result.b = (var_4.b & 2) != 0
    
    return result
}
