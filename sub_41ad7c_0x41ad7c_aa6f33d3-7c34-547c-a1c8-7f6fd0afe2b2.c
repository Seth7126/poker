// ============================================================
// 函数名称: sub_41ad7c
// 虚拟地址: 0x41ad7c
// WARP GUID: aa6f33d3-7c34-547c-a1c8-7f6fd0afe2b2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41ac98
// [被调用的父级函数]: sub_41aebc, sub_41ade0, sub_41f1b0
// ============================================================

int32_t __fastcallsub_41ad7c(int32_t* arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: void var_2c
    void var_2c
    HGDIOBJ eax
    sub_41ac98(eax, &var_2c, arg3)
    int16_t var_1e
    int32_t var_c
    
    if (var_1e u> 8)
        *arg2 = 0x28
        char var_1c
        
        if ((var_1c & 3) != 0)
            *arg2 += 0xc
    else if (var_c != 0)
        *arg2 = (var_c << 2) + 0x28
    else
        *arg2 = (1 << var_1e.b << 2) + 0x28
    int32_t result
    *arg1 = result
    return result
}
