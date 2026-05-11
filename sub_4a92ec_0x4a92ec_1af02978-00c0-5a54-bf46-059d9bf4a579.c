// ============================================================
// 函数名称: sub_4a92ec
// 虚拟地址: 0x4a92ec
// WARP GUID: 1af02978-00c0-5a54-bf46-059d9bf4a579
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4a55b8, sub_4a3f84, sub_4a3d28
// [被调用的父级函数]: sub_4ab0d4
// ============================================================

int32_t* __convention("regparm")sub_4a92ec(void* arg1)
{
    // 第一条实际指令: sub_4a55b8(arg1)
    sub_4a55b8(arg1)
    void* eax_1 = *(arg1 + 0x68)
    int32_t edx
    
    if (eax_1 != 0)
        edx.b = 1
        sub_4a3f84(eax_1, edx.b)
        return 0
    
    edx.b = 1
    int32_t* result = sub_4a3d28(&data_4a3734, edx, nullptr)
    *(arg1 + 0x68) = result
    return result
}
