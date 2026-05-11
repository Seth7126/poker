// ============================================================
// 函数名称: sub_49b3d8
// 虚拟地址: 0x49b3d8
// WARP GUID: 126d4203-844e-55f1-ba89-32d18e371608
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_408ebc
// [被调用的父级函数]: sub_49b454
// ============================================================

int32_t __fastcallsub_49b3d8(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    int32_t result
    eax, result = sub_408ebc(arg1, 0xffffffff)
    
    if (eax s<= 0xffffffff || eax s>= 0x1000000)
        result = 0
    else
        result.b = 1
    
    if (result.b != 0)
        *arg2 = eax
    
    return result
}
