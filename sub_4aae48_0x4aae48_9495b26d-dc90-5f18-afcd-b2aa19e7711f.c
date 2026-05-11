// ============================================================
// 函数名称: sub_4aae48
// 虚拟地址: 0x4aae48
// WARP GUID: 9495b26d-dc90-5f18-afcd-b2aa19e7711f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4aaf6c, sub_40cc98, sub_4abaa4, sub_4a3cb0
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_4aae48(int32_t* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t* result = arg3
    int32_t* result = arg3
    
    if (arg1[0x1a].b == 0)
        (*(*arg1 + 0x3c))()
    
    arg2.b = 1
    result = sub_4aaf6c(sub_4a9d19+0x107, arg2)
    result[0x21].b = 1
    (*(*result + 0x4c))()
    
    if (sub_4a3cb0(result[0x1a]) == 0)
        sub_40cc98(&result)
        return nullptr
    
    arg1[0x19]
    (*(*result[0x1f] + 8))()
    int32_t edx_4
    edx_4.b = 1
    result[0x20] = sub_4abaa4(sub_4a9d19+0xab, edx_4, arg1)
    result[0x1e] = arg1[0x18]
    return result
}
