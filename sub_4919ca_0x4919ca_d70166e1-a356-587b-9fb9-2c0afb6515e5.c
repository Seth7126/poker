// ============================================================
// 函数名称: sub_4919ca
// 虚拟地址: 0x4919ca
// WARP GUID: d70166e1-a356-587b-9fb9-2c0afb6515e5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: mciSendCommandA
// [内部子函数调用]: sub_491bb8, sub_403430, sub_403420, sub_43324c
// [被调用的父级函数]: 无
// ============================================================

int32_t __fastcallsub_4919ca(int32_t arg1, int32_t arg2, char* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: *arg3 += arg3.b
    *arg3 += arg3.b
    arg3[1] += (&arg3[1]).b
    void* entry_ebx
    entry_ebx:1.b *= 2
    *(arg3 + 1) = &arg3[1 + *(arg3 + 1)]
    *(entry_ebx + 0x56) += arg2.b
    int32_t dwParam2 = arg1
    sub_403430(&arg3[1], arg2)
    void* eax
    eax.w = *(arg3 + 0x2db)
    
    if (eax.w != 0)
        mciSendCommandA(zx.d(eax.w), 0x804, 2, &dwParam2)
    
    sub_491bb8(&arg3[1])
    int32_t edx
    edx.b = arg2.b & 0xfc
    int32_t result = sub_43324c(&arg3[1], edx)
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(&arg3[1])
}
