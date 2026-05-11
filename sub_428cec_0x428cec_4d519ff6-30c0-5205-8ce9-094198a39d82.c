// ============================================================
// 函数名称: sub_428cec
// 虚拟地址: 0x428cec
// WARP GUID: 4d519ff6-30c0-5205-8ce9-094198a39d82
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410524
// [被调用的父级函数]: sub_428dd8, sub_428d48
// ============================================================

void* __convention("regparm")sub_428cec(int32_t* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: *arg3 = 0
    *arg3 = 0
    void* result = nullptr
    
    while (*arg3 s< arg1[2])
        result.b = arg2 == *(sub_410524(arg1, *arg3) + 4)
        
        if (result.b != 0)
            break
        
        *arg3 += 1
    
    return result
}
