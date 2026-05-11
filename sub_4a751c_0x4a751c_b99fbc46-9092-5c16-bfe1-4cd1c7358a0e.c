// ============================================================
// 函数名称: sub_4a751c
// 虚拟地址: 0x4a751c
// WARP GUID: b99fbc46-9092-5c16-bfe1-4cd1c7358a0e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4a8048, sub_4a3478
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4a751c(int32_t* arg1)
{
    // 第一条实际指令: char result
    char result
    int32_t edx_1
    result, edx_1 = (*(*arg1 + 0x54))()
    char result_1 = result
    
    if (result_1 != 0)
        edx_1.b = 3
        sub_4a3478()
        result = (*(*arg1 + 0x5c))()
    
    if (arg1[0x1a].b != 0)
        result = sub_4a8048(arg1, nullptr)
    
    if (result_1 == 0)
        return result
    
    (*(*arg1 + 0x3c))()
    int32_t edx_4
    edx_4.b = 4
    return sub_4a3478()
}
