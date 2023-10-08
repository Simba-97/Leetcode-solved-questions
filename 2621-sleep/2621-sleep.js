/**
 * @param {number} millis
 * @return {Promise}
 */
function sleepForTime(ms) {
    return new Promise(resolve => setTimeout(resolve, ms));
}

async function sleep(millis) {
    let t = Date.now();
    return sleepForTime(millis).then(() => console.log(Date.now() - t))
}

/** 
 * let t = Date.now()
 * sleep(100).then(() => console.log(Date.now() - t)) // 100
 */